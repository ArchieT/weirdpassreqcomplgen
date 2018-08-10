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
#define T(x,y) TEST_UCHAR_FUN(log2i,x,y)
    T(0, 0);
    T(1, 0);
    T(2, 1);
    T(3, 1);
    T(4, 2);
    T(5, 2);
    T(255, 7);
#undef T
#define T(x,y) TEST_UCHAR_FUN(log2c,x,y)
    T(0, 0);
    T(1, 1);
    T(2, 1);
    T(3, 2);
    T(4, 2);
    T(5, 2);
    T(255, 8);
    return nonzero;
}
