#include <gtest/gtest.h>
#include "Fraction.h"
TEST(Denominator, NotEqualToZero)
{
 Fraction a(1,3);
 ASSERT_NE(a.GetDenominator(),0);

}
TEST(CopiedFraction,IsEqualCorrect)
{
  Fraction a(1,3);
  Fraction b(a);
  EXPECT_EQ(a.GetNumerator(),b.GetNumerator());
  EXPECT_EQ(a.GetDenominator(),b.GetDenominator());
}
TEST(Division, NotEqualToZero)
{
  Fraction a(1,3);
  Fraction b(3,1);
  EXPECT_NE(b.GetNumerator(), 0);

}
TEST(DividingNegativeByNegative, Correct)
{
  Fraction a(-2,5);
  Fraction b(-1,2);
  a.Division(b);
  EXPECT_EQ(a.GetNumerator(),4);
  EXPECT_EQ(a.GetDenominator(),5);
}
TEST(DividingNegativeByPozitive,Correct)
{
  Fraction a(-2,5);
  Fraction b(1,2);
  a.Division(b);
  EXPECT_EQ(a.GetNumerator(),-4);
  EXPECT_EQ(a.GetDenominator(),5);
}
TEST(DividingPozitiveByPozitive,Correct)
{
  Fraction a(2,5);
  Fraction b(1,2);
  a.Division(b);
  EXPECT_EQ(a.GetNumerator(),4);
  EXPECT_EQ(a.GetDenominator(),5);
}
TEST(DividingSameFractions, Correct)
{
  Fraction a(1,2);
  Fraction b(1,2);
  a.Division(b);
  EXPECT_EQ(a.GetNumerator(),1);
  EXPECT_EQ(a.GetDenominator(),1);
}
TEST(AddNegativeNumbersToPozitive, Correct)
{
  Fraction a(1,3);
  Fraction b(-5, 3);
  a.Add(b);
  EXPECT_EQ(a.GetNumerator(),-4);
  EXPECT_EQ(a.GetDenominator(),3);

}
TEST(AddNegativeNumbersTONegative, Correct)
{
  Fraction a(-2,3);
  Fraction b(-5,6);
  a.Add(b);
  EXPECT_EQ(a.GetNumerator(),-3);
  EXPECT_EQ(a.GetDenominator(),2);
}
TEST(AddPozitiveNumberToPozitive,Correct)
{
  Fraction a(2,3);
  Fraction b(1,5);
  a.Add(b);
  EXPECT_EQ(a.GetNumerator(),13);
  EXPECT_EQ(a.GetDenominator(),15);
}
TEST(AddPozitivNumberToNegative, Correct)
{
  Fraction a(2,3);
  Fraction b(-1,5);
  a.Add(b);
  EXPECT_EQ(a.GetNumerator(),7);
  EXPECT_EQ(a.GetDenominator(),15);
}
TEST(SummIsNotProperFraction, Correct)
{
  Fraction a(2,3);
  Fraction b (4,5);
  a.Add(b);
  EXPECT_EQ(a.GetNumerator(),22);
  EXPECT_EQ(a.GetDenominator(),15);
}
TEST(MultiplyNegativeWithNegetive, Correct)
{
  Fraction a(-2,3);
  Fraction b(-4,5);
  a.Multiply(b);
  EXPECT_EQ(a.GetNumerator(),8);
  EXPECT_EQ(a.GetDenominator(),15);
}
TEST(MUltiplyNegativeWithPozitive, Correct)
{
  Fraction a(2,3);
  Fraction b(-4,5);
  a.Multiply(b);
  EXPECT_EQ(a.GetNumerator(),-8);
  EXPECT_EQ(a.GetDenominator(),15);
}
TEST(MultiplyPozitiveWithPozitive, Correct){
  Fraction a(2,3);
  Fraction b(4,5);
  a.Multiply(b);
  EXPECT_EQ(a.GetNumerator(),8);
  EXPECT_EQ(a.GetDenominator(),15);
}
TEST(MultiplyNotProperFraction, Correct)
{
  Fraction a(10,2);
  Fraction b(3,7);
  a.Multiply(b);
  EXPECT_EQ(a.GetNumerator(),15);
  EXPECT_EQ(a.GetDenominator(),7);
}
TEST(ReductionTest,Correct)
{
Fraction a(5,125);
EXPECT_EQ(a.GetNumerator(),1);
EXPECT_EQ(a.GetDenominator(),25);
EXPECT_LT(a.GetNumerator(),a.GetDenominator());
}
