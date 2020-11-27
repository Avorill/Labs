#include <gtest/gtest.h>
#include "Fraction.h"
TEST(Denominator, NotEqualToZero)
{
 Fraction a(1,3);
 EXPECT_NE(a.GetDenominator(),0);

}