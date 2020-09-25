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
	  uniform_real_distribution<> urd(-100, 100);//random massiv
	  mas[i] = urd(gen);

	}
  } else {
	cout << "enter massiv elements [-100;100]" << endl;//enter array elements
	for (int i = 0; i < size; i++) {
	  cin >> mas[i];

	}
  }
  double max, min;
  int k = size - 1, b = size - 1;
  max = mas[size - 1];
  for (int i = size - 1; i >= 0; i--)///max element
  {
	if (mas[i] > max) {
	  max = mas[i];
	  k = i;
	}
  }
  min = mas[size - 1];///min elsement
  for (int i = size - 1; i >= 0; i--) {
	if (mas[i] < min) {
	  min = mas[i];
	  b = i;
	}
  }
  double proiz = 1;
  if (k==b) {
	cout << "array consists of idencial digits\n";
  }
  else
	if(fabs(k-b)==1)
	{
	  cout<<"no elements between min and max"<<endl;
	}
	else
	  if (k < b) {
		for (int i = k + 1; i < b; i++) {
		  proiz *= mas[i];
		}
	  }
	  else
		  if (k > b) {
			for (int i = b + 1; i < k; i++) {
			  proiz *= mas[i];
			}
		}

   if(fabs(k-b)!=1)
   {
	 cout<<endl;
	 cout<<"product of array elements== "<<proiz<<endl;
	  
   }
 //end


  return 0;
}
