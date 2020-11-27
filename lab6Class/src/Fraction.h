//
// Created by c5066469 on 31-Oct-20.
//
#include <iostream>
#ifndef LAB6CLASS__FRACTION_H_
#define LAB6CLASS__FRACTION_H_
class Fraction {
 private:
  int Numerator, Denominator;
  Fraction();
 public:
	int GetNumerator();
	int GetDenominator();
  Fraction(int, int);
  Fraction(const Fraction& );
  void Print();
  void Add(const Fraction& );
  void Multiply(const Fraction&);
  void Division(const Fraction&);
  void Reduct(int &num, int &denum);
};

#endif //LAB6CLASS__FRACTION_H_
