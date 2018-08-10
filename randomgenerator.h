//
// Created by mf on 10.08.18.
//

#ifndef WEIRDPASSREQCOMPLGEN_RANDOMGENERATOR_H
#define WEIRDPASSREQCOMPLGEN_RANDOMGENERATOR_H

#include <string.h>

signed char log2i(unsigned char n);
signed char log2c(unsigned char n);

unsigned char *genrandombytes(size_t count);

unsigned char *gendigits(
        unsigned char min_count,
        unsigned char max_count,
        unsigned char base);

#endif //WEIRDPASSREQCOMPLGEN_RANDOMGENERATOR_H
