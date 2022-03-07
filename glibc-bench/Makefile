DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: glibc-bench_default_core_1 glibc-bench_support_core_1 glibc-bench_default_core_2 glibc-bench_support_core_2 glibc-bench_default_core_4 glibc-bench_support_core_4 glibc-bench_default_core_8 glibc-bench_support_core_8

CFLAGS = -std=c++17 -O2 -L -lm.
GLIBC_BENCH_SOURCES = bench-malloc-thread.c

glibc-bench_default_core_1: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

glibc-bench_support_core_1: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_support_core_1 -DNUM_THREADS=1 $(SUPPORT_LINKER)

glibc-bench_default_core_2: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

glibc-bench_support_core_2: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_support_core_2 -DNUM_THREADS=2 $(SUPPORT_LINKER) 


glibc-bench_default_core_4: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

glibc-bench_support_core_4: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_support_core_4 -DNUM_THREADS=4 $(SUPPORT_LINKER)

glibc-bench_default_core_8: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER) 

glibc-bench_support_core_8: ${GLIBC_BENCH_SOURCES}
	g++ $(CFLAGS) ${GLIBC_BENCH_SOURCES} -o glibc-bench_support_core_8 -DNUM_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o glibc-bench_default_core* glibc-bench_support_core*
