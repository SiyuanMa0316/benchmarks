#have to use gcc to avoid error. Plenty of warnings
DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: expresso_default_core_1 expresso_support_core_1 expresso_default_core_2 expresso_support_core_2 expresso_default_core_4 expresso_support_core_4 expresso_default_core_8 expresso_support_core_8

CFLAGS = -std=c99 -O2 -L.
ESPRESSO = cofactor.c cols.c compl.c contain.c cubestr.c cvrin.c cvrm.c cvrmisc.c cvrout.c\
    dominate.c equiv.c espresso.c essen.c exact.c expand.c gasp.c getopt.c gimpel.c\
    globals.c hack.c indep.c irred.c main.c map.c matrix.c mincov.c opo.c pair.c part.c\
    primes.c reduce.c rows.c set.c setc.c sharp.c sminterf.c solution.c sparse.c unate.c\
    utility.c verify.c

expresso_default_core_1: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

expresso_support_core_1: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_support_core_1 -DNUM_THREADS=1 $(SUPPORT_LINKER)

expresso_default_core_2: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

expresso_support_core_2: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_support_core_2 -DNUM_THREADS=2 $(SUPPORT_LINKER) 


expresso_default_core_4: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

expresso_support_core_4: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_support_core_4 -DNUM_THREADS=4 $(SUPPORT_LINKER)

expresso_default_core_8: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER) 

expresso_support_core_8: ${ESPRESSO}
	gcc $(CFLAGS) ${ESPRESSO} -o expresso_support_core_8 -DNUM_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o expresso_default_core* expresso_support_core*
