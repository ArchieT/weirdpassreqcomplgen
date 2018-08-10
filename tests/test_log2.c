//
// Created by mf on 10.08.18.
//

#include "assertions.h"
#include "../randomgenerator.h"

int main() {
    int nonzero = 0;
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(0), 0);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(1), 0);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(2), 1);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(3), 1);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(4), 2);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(5), 2);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2i(255), 7);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(0), 0);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(1), 1);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(2), 1);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(3), 2);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(4), 2);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(5), 2);
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, log2c(255), 8);
    return nonzero;
}
