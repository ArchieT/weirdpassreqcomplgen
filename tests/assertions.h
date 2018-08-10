//
// Created by mf on 10.08.18.
//

#ifndef WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
#define WEIRDPASSREQCOMPLGEN_ASSERTIONS_H

#include "stdio.h"
#include "stdarg.h"
#include "string.h"

void assert_equal_int(int *nonzero, char *fstr, int a, int b) {
    if (*nonzero == 0 && a != b) {
        fprintf(stderr, fstr, a, b);
        *nonzero = 8;
    }
}

#endif //WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
