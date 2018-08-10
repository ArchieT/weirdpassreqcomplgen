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
    return nonzero;
}
