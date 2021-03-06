///-*-C++-*-//////////////////////////////////////////////////////////////////
//
// Hoard: A Fast, Scalable, and Memory-Efficient Allocator
//        for Shared-Memory Multiprocessors
// Contact author: Emery Berger, http://www.cs.umass.edu/~emery
//
// Copyright (c) 1998-2003, The University of Texas at Austin.
//
// This library is free software; you can redistribute it and/or modify
// it under the terms of the GNU Library General Public License as
// published by the Free Software Foundation, http://www.fsf.org.
//
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
//////////////////////////////////////////////////////////////////////////////

/**
 * @file  cache-thrash.cpp
 * @brief cache-thrash is a benchmark that exercises a heap's cache-locality.
 *
 * Try the following (on a P-processor machine):
 *
 *  cache-thrash 1 1000 1 1000000 P
 *  cache-thrash P 1000 1 1000000 P
 *
 *  cache-thrash-hoard 1 1000 1 1000000 P
 *  cache-thrash-hoard P 1000 1 1000000 P
 *
 *  The ideal is a P-fold speedup.
*/


#include <iostream>
#include <stdlib.h>
#include <pthread.h>
using namespace std;


// This class just holds arguments to each thread.
class workerArg {
public:
  workerArg() {}
  workerArg (int objSize, int repetitions, int iterations)
    : _objSize (objSize),
      _iterations (iterations),
      _repetitions (repetitions)
  {}

  int _objSize;
  int _iterations;
  int _repetitions;
};


extern "C" void * worker (void * arg)
{
  // Repeatedly do the following:
  //   malloc a given-sized object,
  //   repeatedly write on it,
  //   then free it.
  workerArg * w = (workerArg *) arg;
  workerArg w1 = *w;
  for (int i = 0; i < w1._iterations; i++) {
    // Allocate the object.
    char * obj = new char[w1._objSize];
    //    printf ("obj = %p\n", obj);
    // Write into it a bunch of times.
    for (int j = 0; j < w1._repetitions; j++) {
      for (int k = 0; k < w1._objSize; k++) {
#if 0
	volatile double d = 1.0;
	d = d * d + d * d;
#else
	obj[k] = (char) k;
	volatile char ch = obj[k];
	ch++;
#endif
      }
    }
    // Free the object.
    delete [] obj;
  }
#if !defined(_WIN32)
  return NULL;
#endif
}


int main (int argc, char * argv[])
{
  int nthreads;
  int iterations;
  int objSize;
  int repetitions;
  int concurrency;

  if (argc > 5) {
    nthreads = NUM_THREADS;
    iterations = atoi(argv[2]);
    objSize = atoi(argv[3]);
    repetitions = atoi(argv[4]);
    concurrency = atoi(argv[5]);
  } else {
    cerr << "Usage: " << argv[0] << " nthreads iterations objSize repetitions concurrency" << endl;
    exit(1);
  }

  pthread_t* threads = (pthread_t*)calloc(nthreads,sizeof(pthread_t));
  pthread_setconcurrency(concurrency);

  int i;

  workerArg * w = new workerArg[nthreads];

  for (i = 0; i < nthreads; i++) {
    w[i] = workerArg (objSize, repetitions / nthreads, iterations);
    pthread_create(&threads[i], NULL, &worker, (void *)&w[i]);
  }
  for (i = 0; i < nthreads; i++) {
    pthread_join(threads[i], NULL);
  }

  free(threads);
  delete [] w;

}
