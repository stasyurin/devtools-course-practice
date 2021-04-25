// Copyright 2021 Yurin Stanislav

#include <gtest/gtest.h>

#include "include/fraction.h"

TEST(Fraction, can_create_constructor_with_one_parameter_witch_is_3) {
    Fraction f(3);

    ASSERT_EQ(3, f.getNumerator());
}

TEST(Fraction, can_create_constructor_with_one_parameter_witch_is_29) {
    Fraction f(29);

    ASSERT_EQ(29, f.getNumerator());
}

TEST(Fraction, can_create_constructor_with_two_parametres_witch_is_29_and_43) {
    Fraction f(29, 43);

    ASSERT_EQ(43, f.getDenominator());
}

TEST(Fraction, can_create_constructor_with_two_parametres_witch_is_29_and_101) {
    Fraction f(29, 101);

    ASSERT_EQ(101, f.getDenominator());
}

TEST(Fraction, throws_on_zero_denominator) {
    ASSERT_ANY_THROW(Fraction f(29, 0));
}

TEST(Fraction, default_fraction_creating) {
    Fraction f;

    ASSERT_EQ(0, f.getNumerator());
    ASSERT_EQ(1, f.getDenominator());
}

TEST(Fraction, fraction_with_negative_parametres_becomes_positive) {
    Fraction f(-1, -2);

    ASSERT_EQ(1, f.getNumerator());
    ASSERT_EQ(2, f.getDenominator());
}

TEST(Fraction, moves_minus_to_numerator) {
    Fraction f(1, -2);

    ASSERT_EQ(-1, f.getNumerator());
    ASSERT_EQ(2, f.getDenominator());
}

TEST(Fraction, reduction) {
    Fraction f(3, 6);

    ASSERT_EQ(1, f.getNumerator());
    ASSERT_EQ(2, f.getDenominator());
}

TEST(Fraction, negative_fractions_reduction) {
    Fraction f(8, -32);

    ASSERT_EQ(-1, f.getNumerator());
    ASSERT_EQ(4, f.getDenominator());
}

TEST(Fraction, gcd_3_and_6) {
    Fraction f;

    ASSERT_EQ(3, f.gcd(3, 6));
}

TEST(Fraction, gcd_18_and_30) {
    Fraction f;

    ASSERT_EQ(6, f.gcd(18, 30));
}

TEST(Fraction, gcd_minus_18_and_30) {
    Fraction f;

    ASSERT_ANY_THROW(f.gcd(-18, 30));
}

TEST(Fraction, lcm_12_and_18) {
    Fraction f;

    ASSERT_EQ(36, f.lcm(12, 18));
}

TEST(Fraction, lcm_minus_12_and_18) {
    Fraction f;

    ASSERT_ANY_THROW(f.lcm(-12, 18));
}

TEST(Fraction, comparison_operator_overloading) {
    Fraction f1(2, 3);
    Fraction f2 = f1;

    ASSERT_EQ(2, f2.getNumerator());
    ASSERT_EQ(3, f2.getDenominator());
}

TEST(Fraction, 2_at_3_plus_3_at_4) {
    Fraction f1(2, 3);
    Fraction f2(3, 4);
    Fraction f3 = f1 + f2;

    ASSERT_EQ(17, f3.getNumerator());
    ASSERT_EQ(12, f3.getDenominator());
}

TEST(Fraction, minus_3_at_5_plus_4_at_7) {
    Fraction f1(-3, 5);
    Fraction f2(4, 7);
    Fraction f3 = f1 + f2;

    ASSERT_EQ(-1, f3.getNumerator());
    ASSERT_EQ(35, f3.getDenominator());
}

TEST(Fraction, 2_at_5_minus_4_at_3) {
    Fraction f1(2, 5);
    Fraction f2(4, 3);
    Fraction f3 = f1 - f2;

    ASSERT_EQ(-14, f3.getNumerator());
    ASSERT_EQ(15, f3.getDenominator());
}

TEST(Fraction, 3_at_2_multi_8_at_11) {
    Fraction f1(3, 2);
    Fraction f2(8, 11);
    Fraction f3 = f1 * f2;

    ASSERT_EQ(12, f3.getNumerator());
    ASSERT_EQ(11, f3.getDenominator());
}

TEST(Fraction, 13_at_11_dev_4_at_5) {
    Fraction f1(13, 11);
    Fraction f2(4, 5);
    Fraction f3 = f1 / f2;

    ASSERT_EQ(65, f3.getNumerator());
    ASSERT_EQ(44, f3.getDenominator());
}
