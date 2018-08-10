//
// Created by mf on 10.08.18.
//
#include "logarithms.h"

signed char log2i(unsigned long long n) {
    signed char r = 0;
    while (n >>= 1) ++r;
    return r;
}

signed char log2c(unsigned long long n) {
    n++;
    signed char r;
    if (n != 0) {
        r = log2i(n);
    } else {
        r = log2i(--n);
        r++;
    }
    return r;
}
