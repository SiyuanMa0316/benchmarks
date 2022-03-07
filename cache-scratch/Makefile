DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: cache_scratch_default_core_1 cache_scratch_support_core_1 cache_scratch_default_core_2 cache_scratch_support_core_2 cache_scratch_default_core_4 cache_scratch_support_core_4 cache_scratch_default_core_8 cache_scratch_support_core_8

CFLAGS = -std=c++17 -O2 -L -lm.

cache_scratch_default_core_1: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

cache_scratch_support_core_1: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_support_core_1 -DNUM_THREADS=1 $(SUPPORT_LINKER)

cache_scratch_default_core_2: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

cache_scratch_support_core_2: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_support_core_2 -DNUM_THREADS=2 $(SUPPORT_LINKER) 


cache_scratch_default_core_4: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

cache_scratch_support_core_4: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_support_core_4 -DNUM_THREADS=4 $(SUPPORT_LINKER)

cache_scratch_default_core_8: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER) 

cache_scratch_support_core_8: cache-scratch.cpp
	g++ $(CFLAGS) cache-scratch.cpp -o cache_scratch_support_core_8 -DNUM_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o cache_scratch_default_core* cache_scratch_support_core*
