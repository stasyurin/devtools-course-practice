// Copyright 2021 Yurin Stanislav

#ifndef MODULES_FRACTION_CALC_BY_USING_GCD_INCLUDE_FRACTION_CALC_H_
#define MODULES_FRACTION_CALC_BY_USING_GCD_INCLUDE_FRACTION_CALC_H_

class Fraction {
 public:
    explicit Fraction(int n = 0, int d = 1);

    int getNumerator();
    int getDenominator();

    int gcd(int, int);

 private:
    int numerator;
    int denominator;
};

#endif  // MODULES_FRACTION_CALC_BY_USING_GCD_INCLUDE_FRACTION_CALC_H_
