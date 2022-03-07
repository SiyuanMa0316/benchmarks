#have to use gcc to avoid error
DEFAULT_LINKER =  -lpthread -lm
SUPPORT_LINKER =  -lpthread -lm

all: cfrac_default_core_1 cfrac_support_core_1 cfrac_default_core_2 cfrac_support_core_2 cfrac_default_core_4 cfrac_support_core_4 cfrac_default_core_8 cfrac_support_core_8

CFLAGS = -std=c99 -O2 -L.
CFRAC_SOURCES = cfrac.c pops.c pconst.c pio.c pabs.c pneg.c pcmp.c podd.c phalf.c padd.c psub.c pmul.c pdivmod.c psqrt.c ppowmod.c atop.c ptoa.c itop.c utop.c ptou.c errorp.c pfloat.c pidiv.c pimod.c picmp.c primes.c pcfrac.c pgcd.c

cfrac_default_core_1: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

cfrac_support_core_1: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_support_core_1 -DNUM_THREADS=1 $(SUPPORT_LINKER)

cfrac_default_core_2: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

cfrac_support_core_2: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_support_core_2 -DNUM_THREADS=2 $(SUPPORT_LINKER) 


cfrac_default_core_4: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

cfrac_support_core_4: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_support_core_4 -DNUM_THREADS=4 $(SUPPORT_LINKER)

cfrac_default_core_8: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER) 

cfrac_support_core_8: ${CFRAC_SOURCES}
	gcc $(CFLAGS) ${CFRAC_SOURCES} -o cfrac_support_core_8 -DNUM_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o cfrac_default_core* cfrac_support_core*
