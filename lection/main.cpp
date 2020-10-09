#include <iostream>
using namespace std;
double power(const double &a, int &n)
{
  double res(1);
  for(int i=0;i<n;++i){
	res*=a;
  }

  a=8;
  n=15;
  return res;//retun must hear
}

int main() {
  double am(5);
  int nm(3);
  cout<<power(am,nm)<<endl;
  cout<<am<<"  "<<nm<<endl;



//  int matrix[4][6]=
//  {
//	{1,2,3,4,5,6},
//	{1,2,3,4,5,6},
//	{1,2,3,4,5,6},
//	{1,2,3,4,5,6}
//  };
//  cout<<matrix[0][3]<<endl;
//  cout<<sizeof(matrix)<<endl;//full matrix size when static
//
//  int A(4), B(3);
//
////  int dynamicMatrix[A][B];
// int**dynamicMatrix = new int*[A];
//  for(int i=0; i<A;++i) {
//    for (int j = 0; j < B; ++j) {
//	 cout<< dynamicMatrix[i][j]<<" ";
//	}
//	cout << endl;
//  }
//
//
//
//
//  for(int i =0;i<B;++i)
//  {
//	delete dynamicMatrix[i];
//  }
//  delete[] dynamicMatrix;
//
  return 0;
}
void printArray(int*array, int size){
  for(int i= 0; i<size;++i){
	cout<<array[i]<<" ";
  }
  cout<<endl;
}