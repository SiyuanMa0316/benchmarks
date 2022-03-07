#have to use gcc to avoid error. Plenty of warnings
NAME = mleak

DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: ${NAME}_default_core_1 ${NAME}_support_core_1 ${NAME}_default_core_2 ${NAME}_support_core_2 ${NAME}_default_core_4 ${NAME}_support_core_4 ${NAME}_default_core_8 ${NAME}_support_core_8

CFLAGS = -std=c99 -O2 -L.
SOURCES = mleak.c

${NAME}_default_core_1: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_1 -DTHREADS=1 $(DEFAULT_LINKER)

${NAME}_support_core_1: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_1 -DTHREADS=1 $(SUPPORT_LINKER)

${NAME}_default_core_2: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_2 -DTHREADS=2 $(DEFAULT_LINKER)

${NAME}_support_core_2: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_2 -DTHREADS=2 $(SUPPORT_LINKER) 


${NAME}_default_core_4: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_4 -DTHREADS=4 $(DEFAULT_LINKER)

${NAME}_support_core_4: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_4 -DTHREADS=4 $(SUPPORT_LINKER)

${NAME}_default_core_8: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_8 -DTHREADS=8 $(DEFAULT_LINKER) 

${NAME}_support_core_8: ${SOURCES}
	gcc $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_8 -DTHREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o ${NAME}_default_core* ${NAME}_support_core*
