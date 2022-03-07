# DEFAULT_LINKER = -lmimalloc -lpthread
# SUPPORT_LINKER = -lpimmalloc -lpthread

DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: larson_default_core_1 larson_support_core_1 larson_default_core_2 larson_support_core_2 larson_default_core_4 larson_support_core_4 larson_default_core_8 larson_support_core_8

CFLAGS = -std=c++17 -O2 -L.

larson_default_core_1: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_default_core_1 -DNUM_MAX_THREADS=1 $(DEFAULT_LINKER)

larson_support_core_1: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_support_core_1 -DNUM_MAX_THREADS=1 $(SUPPORT_LINKER)

larson_default_core_2: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_default_core_2 -DNUM_MAX_THREADS=2 $(DEFAULT_LINKER)

larson_support_core_2: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_support_core_2 -DNUM_MAX_THREADS=2 $(SUPPORT_LINKER) 


larson_default_core_4: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_default_core_4 -DNUM_MAX_THREADS=4 $(DEFAULT_LINKER)

larson_support_core_4: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_support_core_4 -DNUM_MAX_THREADS=4 $(SUPPORT_LINKER)

larson_default_core_8: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_default_core_8 -DNUM_MAX_THREADS=8 $(DEFAULT_LINKER) 

larson_support_core_8: larson_default.cpp
	g++ $(CFLAGS) larson_default.cpp -o larson_support_core_8 -DNUM_MAX_THREADS=8 $(SUPPORT_LINKER) 


clean:
	rm *.o larson_default_core* larson_support_core*
