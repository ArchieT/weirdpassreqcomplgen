//
// Created by mf on 10.08.18.
//

#ifndef WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
#define WEIRDPASSREQCOMPLGEN_ASSERTIONS_H

#include "stdio.h"
#include "stdarg.h"
#include "string.h"

#define DEF_ASSERT_EQUAL ( ttype ) \
void assert_equal_ ## ttype (int *nonzero, char* fstr, (ttype) a, (ttype) b) {\
    if (*nonzero == 0 && a != b) {\
        fprintf(stderr, fstr, a, b);\
        *nonzero=8;\
    }\
}

DEF_ASSERT_EQUAL(int)

DEF_ASSERT_EQUAL(char)

#endif //WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
