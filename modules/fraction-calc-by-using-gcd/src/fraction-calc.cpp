// Copyright 2021 Yurin Stanislav

#include "include/fraction-calc.h"

#include <math.h>

Fraction::Fraction(int n, int d) {
    if (d == 0)
        throw "Can't have zero denominator";

    if (d < 0) {
        n *= -1;
        d *= -1;
    }

    int gcd_n_and_d = gcd(abs(n), abs(d));

    numerator = n / gcd_n_and_d;
    denominator = d / gcd_n_and_d;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

int Fraction::gcd(int a, int b) {
    if (a < 0 || b < 0)
        throw "Can't find gcd if one of numbers is negative";

    while (a && b)
        if (a > b)
            a %= b;
        else
            b %= a;

    return a + b;
}
