#include <iostream>
#include "StackForCalculator.h"
#include "Calculator.h"
#include "string"
using namespace std;


int main()
{
  cout<<" enter expression? without spaces"<<endl;
  string res, prc;
  cout<<">>  ";
  cin>>res;
//  prc = parse(res);
//  cout<<prc<<endl;
  Run(res);


  return 0;
}