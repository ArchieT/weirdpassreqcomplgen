//
// Created by mf on 10.08.18.
//

#include "assertions.h"

int main() {
    int nonzero = 0;
    ASSERT_EQUAL_INT_DECLARATIVE(&nonzero, 8, 1, 2);
    return nonzero;
}
