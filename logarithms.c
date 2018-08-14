//
// Created by mf on 10.08.18.
//
#include "logarithms.h"

signed char log2i(unsigned long long n) {
    signed char r = 0;
    while (n >>= 1) ++r;
    return r;
}

signed char log8i(unsigned long long n) {
    signed char r = 0;
    while (n >>= 3) ++r;
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

signed char log8c(unsigned long long n) {
    n++;
    signed char r;
    if (n != 0) {
        r = log8i(n);
    } else {
        r = log8i(--n);
        r++;
    }
    return r;
}

size_t bytes_for_base(unsigned char b, unsigned long long n) {
    /* let x = n^b, i.e. such that n = log_b(x), precisely
     * let r be the least integer such that x ≤ 8^r
     * r would have to be ceiling of log8(x)
     * /log8(x)\ ≈ /log2(x)\ ~/~ \log2(8)/
     * log2(x) = log_b(x) ~*~ log2(b)
     * log_b(2) = 1 ~/~ log2(b)
     * log_b(x) = log2(x) ~/~ log2(b)
     *   */
    return 0;
}
