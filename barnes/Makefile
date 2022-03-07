#have to use gcc to avoid error. There are plenty of warnings
NAME = barnes

DEFAULT_LINKER =  -lpthread -lm
SUPPORT_LINKER =  -lpthread -lm

SOURCES = code.c code_io.c load.c grav.c getparam.c util.c

all: ${NAME}_default_core_1 ${NAME}_support_core_1 ${NAME}_default_core_2 ${NAME}_support_core_2 ${NAME}_default_core_4 ${NAME}_support_core_4 ${NAME}_default_core_8 ${NAME}_support_core_8

CFLAGS = -std=c99 -O2 -L -D_POSIX_C_SOURCE=2.

${NAME}_default_core_1: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_1 -DNUM_MAX_THREADS=1 $(DEFAULT_LINKER)

${NAME}_support_core_1: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_1 -DNUM_MAX_THREADS=1 $(SUPPORT_LINKER)

${NAME}_default_core_2: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_2 -DNUM_MAX_THREADS=2 $(DEFAULT_LINKER)

${NAME}_support_core_2: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_2 -DNUM_MAX_THREADS=2 $(SUPPORT_LINKER) 


${NAME}_default_core_4: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_4 -DNUM_MAX_THREADS=4 $(DEFAULT_LINKER)

${NAME}_support_core_4: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_4 -DNUM_MAX_THREADS=4 $(SUPPORT_LINKER)

${NAME}_default_core_8: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_8 -DNUM_MAX_THREADS=8 $(DEFAULT_LINKER) 

${NAME}_support_core_8: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_8 -DNUM_MAX_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o ${NAME}_default_core* ${NAME}_support_core*
