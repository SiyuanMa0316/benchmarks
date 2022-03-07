NAME = larson

DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: ${NAME}_default_core_1 ${NAME}_support_core_1 ${NAME}_default_core_2 ${NAME}_support_core_2 ${NAME}_default_core_4 ${NAME}_support_core_4 ${NAME}_default_core_8 ${NAME}_support_core_8

CFLAGS = -std=c++17 -O2 -L. -DMT -Wno-unused-result
SOURCES = larson.cpp

${NAME}_default_core_1: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

${NAME}_support_core_1: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_1 -DNUM_THREADS=1 $(SUPPORT_LINKER)

${NAME}_default_core_2: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

${NAME}_support_core_2: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_2 -DNUM_THREADS=2 $(SUPPORT_LINKER) 


${NAME}_default_core_4: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

${NAME}_support_core_4: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_4 -DNUM_THREADS=4 $(SUPPORT_LINKER)

${NAME}_default_core_8: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER) 

${NAME}_support_core_8: ${SOURCES}
	g++ $(CFLAGS) ${SOURCES} -o ${NAME}_support_core_8 -DNUM_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o ${NAME}_default_core* ${NAME}_support_core*
