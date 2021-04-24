// Copyright 2021 Yurin Stanislav

#include <gtest/gtest.h>

#include <vector>

#include "include/fraction-calc.h"

TEST(Fraction, can_create_constructor_with_one_parameter_witch_is_3) {
    Fraction fc(3);

    ASSERT_EQ(3, fc.getNumerator());
}

TEST(Fraction, can_create_constructor_with_one_parameter_witch_is_29) {
    Fraction fc(29);

    ASSERT_EQ(29, fc.getNumerator());
}

TEST(Fraction, can_create_constructor_with_two_parametres_witch_is_29_and_43) {
    Fraction fc(29, 43);

    ASSERT_EQ(43, fc.getDenominator());
}

TEST(Fraction, can_create_constructor_with_two_parametres_witch_is_29_and_101) {
    Fraction fc(29, 101);

    ASSERT_EQ(101, fc.getDenominator());
}

TEST(Fraction, throws_on_zero_denominator) {
    ASSERT_ANY_THROW(Fraction fc(29, 0));
}

TEST(Fraction, default_fraction_creating) {
    Fraction fc;

    ASSERT_EQ(fc.getNumerator(), 0);
    ASSERT_EQ(fc.getDenominator(), 1);
}
