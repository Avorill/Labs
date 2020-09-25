#include <iostream>
#include <random>
#include <ctime>
using namespace std;


int main() {
  const int SIZ = 200;
  int size, p;
  mt19937 gen(time(nullptr));
  cout << "enter massiv size [2," << SIZ << "]" << endl;
  cin >> size;
  double mas[SIZ];
  cout << "will you enter randomly or set manually? enter 1-random, 2-manually" << endl;
  cin >> p;
  if (p==1) {
	for (int i = 0; i < size; i++) {
	  uniform_real_distribution<> urd(-100, 100);//random array
	  mas[i] = urd(gen);
	  cout<<mas[i]<<"  ||  ";
	}
  } else {
	cout << "enter massiv elements [-100;100]" << endl;//enter array elements
	for (int i = 0; i < size; i++) {
	  cin >> mas[i];

	}
  }

  int t = size;
  for(int i =1 ; i <t; i++)
  {

	if(mas[i]<mas[i-1])
	{
	  for(int j=i;j<t;j++)
	  {
	    swap(mas[j],mas[j+1]);
	  }
		t--;
	    i--;
	}

  }
   cout<<endl;
   for(int i=0;i<t;i++)
   {
     cout<<mas[i]<<"  ";
   }
   cout<<endl;

   return 0;
}
