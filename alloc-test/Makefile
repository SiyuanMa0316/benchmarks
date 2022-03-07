DEFAULT_LINKER =  -lpthread
SUPPORT_LINKER =  -lpthread

all: alloc_test_default_core_1 alloc_test_support_core_1 alloc_test_default_core_2 alloc_test_support_core_2 alloc_test_default_core_4 alloc_test_support_core_4 alloc_test_default_core_8 alloc_test_support_core_8

CFLAGS = -std=c++17 -O2 -L -Wno-unused-result -Wno-format -Wno-unused-result

alloc_test_default_core_1: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_default_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

alloc_test_support_core_1: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_support_core_1 -DNUM_THREADS=1 $(DEFAULT_LINKER)

alloc_test_default_core_2: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_default_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER)

alloc_test_support_core_2: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_support_core_2 -DNUM_THREADS=2 $(DEFAULT_LINKER) 

alloc_test_default_core_4: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_default_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

alloc_test_support_core_4: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_support_core_4 -DNUM_THREADS=4 $(DEFAULT_LINKER)

alloc_test_default_core_8: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_default_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER)

alloc_test_support_core_8: test_common.cpp allocator_tester.cpp
	g++ $(CFLAGS) test_common.cpp allocator_tester.cpp -o alloc_test_support_core_8 -DNUM_THREADS=8 $(DEFAULT_LINKER)


clean:
	rm *.o alloc_test_default_core* alloc_test_support_core*
