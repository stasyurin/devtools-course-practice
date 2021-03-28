// Copyright 2021 Yurin Stanislav

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Yurin_Stanislav_ComplexNumberTest, Can_Create_Zero) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Yurin_Stanislav_ComplexNumberTest_Zero_Devision,
     Devision_With_Denominator_Re_Not_EQ_Zero_No_Throw_Exception) {
    double re1 = 5.4;
    double im1 = 3.2;

    ComplexNumber z1(re1, im1);


    double re2 = 2.0;
    double im2 = 0.0;

    ComplexNumber z2(re2, im2);


    ASSERT_NO_THROW(z1/z2);
}

TEST(Yurin_Stanislav_ComplexNumberTest_Zero_Devision,
     Devision_With_Denominator_Im_Not_EQ_Zero_No_Throw_Exception) {
    double re1 = 5.4;
    double im1 = 3.2;

    ComplexNumber z1(re1, im1);


    double re2 = 0.0;
    double im2 = 1.0;

    ComplexNumber z2(re2, im2);


    ASSERT_NO_THROW(z1/z2);
}

TEST(Yurin_Stanislav_ComplexNumberTest_Zero_Devision, Zero_Devision_Throw_Exception) {
    double re1 = 5.4;
    double im1 = 3.2;

    ComplexNumber z1(re1, im1);


    double re2 = 0.0;
    double im2 = 0.0;

    ComplexNumber z2(re2, im2);


    ASSERT_ANY_THROW(z1/z2);
}
