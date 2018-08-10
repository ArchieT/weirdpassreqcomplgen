//
// Created by mf on 10.08.18.
//

#ifndef WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
#define WEIRDPASSREQCOMPLGEN_ASSERTIONS_H

#include "stdio.h"
#include "stdarg.h"
#include "string.h"

void assert_equal_transitive_int(int *nonzero, char* fstr, unsigned int count, ...) {
    va_list ap;
    va_start(ap, count);
    if (*nonzero==0) {
        int i;
        int a, b;
        b = va_arg(ap, int);
        for (i = 1; i < count && *nonzero==0; i++) {
            a = b;
            b = va_arg(ap, int);
            if (a != b) {
                fprintf(stderr, fstr, a, b);
            }
        }
    }
}

#endif //WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
