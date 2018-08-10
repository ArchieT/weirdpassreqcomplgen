//
// Created by mf on 10.08.18.
//

#include "assertions.h"
#include "../logarithms.h"

int main() {
    int nonzero = 0;
#define TEST_FUN(fun,x,y) \
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, ( ( fun ) ( x ) ) , ( y ) )
#define TEST_UCHAR_FUN(fun,x,y) TEST_FUN(fun, ((unsigned char) ( x ) ), y)
    TEST_UCHAR_FUN(log2i, 0, 0);
    TEST_UCHAR_FUN(log2i, 1, 0);
    TEST_UCHAR_FUN(log2i, 2, 1);
    TEST_UCHAR_FUN(log2i, 3, 1);
    TEST_UCHAR_FUN(log2i, 4, 2);
    TEST_UCHAR_FUN(log2i, 5, 2);
    TEST_UCHAR_FUN(log2i, 255, 7);
    TEST_UCHAR_FUN(log2c, 0, 0);
    TEST_UCHAR_FUN(log2c, 1, 1);
    TEST_UCHAR_FUN(log2c, 2, 1);
    TEST_UCHAR_FUN(log2c, 3, 2);
    TEST_UCHAR_FUN(log2c, 4, 2);
    TEST_UCHAR_FUN(log2c, 5, 2);
    TEST_UCHAR_FUN(log2c, 255, 8);
    return nonzero;
}
