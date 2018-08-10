//
// Created by mf on 10.08.18.
//

#ifndef WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
#define WEIRDPASSREQCOMPLGEN_ASSERTIONS_H

#include "stdio.h"
#include "stdarg.h"
#include "string.h"

enum Coercion{Int, Char};

void assert_equal_transitive(int *nonzero, unsigned int count, enum Coercion type, ...) {
    va_list ap;
    va_start(ap, type);
    if (*nonzero==0) {
        int i;
#define COERCED_ASSERT_EQUAL_TRANSITIVE( the_type, fstr ) do \
{\
    ( the_type ) a; \
    ( the_type ) b; \
    b = va_arg(ap, ( the_type ));\
    for (i = 1; i < count && *nonzero==0; i++){\
        a = b;\
        b = va_arg(ap, ( the_type ) );\
        if (a != b) {\
            fprintf(stderr, fstr, a, b);\
            *nonzero=8;\
        }\
    }\
} while(0)

        switch(type){
            case Int:
                COERCED_ASSERT_EQUAL_TRANSITIVE(int, "%d != %d");
                break;;
            case Char:
                COERCED_ASSERT_EQUAL_TRANSITIVE(char, "%d != %d");
                break;;
        }
    }
    va_end(ap);
}

#endif //WEIRDPASSREQCOMPLGEN_ASSERTIONS_H
