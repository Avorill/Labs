#include "Fraction.h"
#include <string>
  Fraction::Fraction() {
  	std::cout << "I can't do this. :(\n";
}
  Fraction::Fraction(int num, int den){
	if (den==0) {
		std::cout << "Error!!!Wrong meaning of denominator. Try again\n";
	  	return;
	  }

	Numerator = num;
	Denominator = den;
	Reduct(Numerator,Denominator);
}
Fraction::Fraction(const Fraction& frac){
  Numerator = frac.Numerator;
  Denominator = frac.Denominator;
}
  int Fraction::GetNumerator(){
  return Numerator;
}
  int Fraction::GetDenominator(){
  return Denominator;
}
 void Fraction::Reduct(int &num, int &denum) {
  int divider=fabs(num);
  while(divider >= 2){
    if(num % divider==0  &&  denum % divider==0){
      num/=divider;
      denum/=divider;
    }
    else
      divider--;
  }
}
  void Fraction::Print() {
	int num = Numerator, denum = Denominator;
	int Remainder, wholePart = 0;
	if (fabs(num) >= fabs(denum)) {
	  if(num*denum>=0) {

		wholePart = num/denum;
		Remainder = num%denum;
		num = Remainder;
	  }
	  else{
		wholePart=fabs(num)/fabs(denum);
		Remainder = abs(num)%abs(denum);
		num = Remainder;
		wholePart=0-wholePart;
	  }
	  if(num==0 && wholePart!=0){
		std::cout<<wholePart<<"\n";
	  }
	  if(num!=0 && wholePart!=0){
		std::cout<<wholePart<<" "<<num<<"/"<<denum<<"\n";
	  }

	}
	else {
	  if (num==0 && wholePart==0) {
		std::cout << "0" << std::endl;
	  } else {
		if (Numerator*Denominator > 0)
		  std::cout << abs(num) << "/" << abs(denum) << "\n";
		else
		  std::cout << "-" << abs(num) << "/" << abs(denum) << "\n";
	  }
	}
  }

  void Fraction::Add(const Fraction& frac){
  Numerator=(Numerator*frac.Denominator+Denominator*frac.Numerator);
  Denominator*=frac.Denominator;
  Reduct(Numerator,Denominator);
}
void Fraction::Multiply(const Fraction & frac) {
  Numerator*=frac.Numerator;
  Denominator*=frac.Denominator;
  Reduct(Numerator,Denominator);
}
void Fraction::Division(const Fraction & frac) {
  if(frac.Numerator==0){
    std::cout<<"can't divide by zero"<<std::endl;
    return;
  }

  Numerator*=frac.Denominator;
  Denominator*=frac.Numerator;
  if(Numerator*Denominator>=0){
    Numerator=abs(Numerator);
    Denominator=abs(Denominator);
  }
  Reduct(Numerator,Denominator);
}
