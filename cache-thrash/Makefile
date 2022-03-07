DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: cache_thrash_default_core_1 cache_thrash_support_core_1 cache_thrash_default_core_2 cache_thrash_support_core_2 cache_thrash_default_core_4 cache_thrash_support_core_4 cache_thrash_default_core_8 cache_thrash_support_core_8

CFLAGS = -std=c++17 -O2 -L.

cache_thrash_default_core_1: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

cache_thrash_support_core_1: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_support_core_1 -DNUM_THREADS=1 $(SUPPORT_LINKER)

cache_thrash_default_core_2: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

cache_thrash_support_core_2: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_support_core_2 -DNUM_THREADS=2 $(SUPPORT_LINKER) 


cache_thrash_default_core_4: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

cache_thrash_support_core_4: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_support_core_4 -DNUM_THREADS=4 $(SUPPORT_LINKER)

cache_thrash_default_core_8: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER) 

cache_thrash_support_core_8: cache-thrash.cpp
	g++ $(CFLAGS) cache-thrash.cpp -o cache_thrash_support_core_8 -DNUM_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o cache_thrash_default_core* cache_thrash_support_core*
