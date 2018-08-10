//
// Created by mf on 10.08.18.
//

#include "assertions.h"

int main() {
    int nonzero = 0;
    assert_equal_int(&nonzero, 8, "are not equal %d %d", 1, 2);
    return nonzero;
}
