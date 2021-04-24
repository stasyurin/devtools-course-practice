// Copyright 2021 Yurin Stanislav

#include "include/fraction-calc.h"

#include <algorithm>
#include <stdexcept>
#include <vector>

Fraction::Fraction(int n, int d) {
    if (d == 0) {
        throw "Can't have zero denominator";
    }

    numerator = n;
    denominator = d;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}
