#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;


int main() {
  const int SIZ=200;
  int size,p;
  mt19937 gen(time(nullptr));
  cout<<"enter massiv size [1,"<<SIZ<<"]"<<endl;
  cin>>size;
  double mas[SIZ];
  cout<<"will you enter randomly or set manually? enter 1-random, 2-manually"<<endl;
  cin>>p;
  if(p==1)
  {
    for(int i=0;i<size;i++)
	{
	  uniform_real_distribution<> urd(-100, 100);//random massiv
	  mas[i]=urd(gen);

	}
  }
  else
  {
      cout<<"enter massiv elements [-100;100]"<<endl;//enter massiv elements
      for(int i=0;i<size;i++) {
		cin >> mas[i];

	  }
  }
  for(int i=0;i<size;i++)//cout massiv elsements
  {
	cout<<mas[i]<<"  ||  ";
  }

  for(int i=1;i<size-2;i+=2) {
	for (int j = (size - 1); j > i;j-=2)
		if(mas[j]<mas[j-2])
		  {
	  			swap(mas[j],mas[j-2]);
		  }
  }
  cout<<endl;
  for(int i=0;i<size;i++)//cout massiv elsements
  {
	cout<<mas[i]<<"  ||  ";
  }//the third task of 11 variant
  return 0;
}
