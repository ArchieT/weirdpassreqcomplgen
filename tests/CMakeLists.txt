add_executable(test_log2 test_log2.c ../randomgenerator.c ../randomgenerator.h assertions.h)
add_test(log2 test_log2)