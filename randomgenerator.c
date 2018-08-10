//
// Created by mf on 10.08.18.
//

#include "randomgenerator.h"
#include "sys/random.h"
#include "stdlib.h"

signed char log2(unsigned char n) {
    signed char r = 0;
    while (n >>= 1) ++r;
    return r;
}

unsigned char *genrandombytes(size_t count) {
    auto r = malloc(count);
    getrandom(r, count, 0);
    return r;
}

unsigned char *gendigits(
        unsigned char min_count,
        unsigned char max_count,
        unsigned char base) {
}

