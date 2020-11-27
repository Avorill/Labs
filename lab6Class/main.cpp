#include <iostream>
#include "src/Fraction.h"


int main() {
    Fraction a(5, 10);
	Fraction b(1,3);
	b.Add(a);
	b.Multiply(a);
	b.Print();
    Fraction c(0,1);
    b.Division(c);
    b.Print();
	std::cout<<a.GetNumerator()<<"  ";
	std::cout<<a.GetDenominator();

  return 0;
}
