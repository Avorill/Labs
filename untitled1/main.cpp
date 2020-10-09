#include <iostream>
#include <ctime>
#include <vector>
#include <iomanip>
int GetElementOfMatrix(int **&matrix, int i, int j) {
  if ((i + j)%2==0) {
	return 10;
  } else

	return matrix[i][j/2];

}
void EnterRandomMatrix(int **&matrix,int I,int J){
  int min_r,max_r;
  srand(time(nullptr));
  std::cout<<"Enter min element for random"<<std::endl;
  std::cin>>min_r;
  std::cout<<"Enter max element for random"<<std::endl;
  std::cin>>max_r;
  int m=J/2;
  for(int i=0; i<I; i++){
	if((i%2!=0)&&(J%2==1)) {
	  for (int j = 0; j < m+1; j++) {

		matrix[i][j] = min_r + rand()%(max_r + 1 - min_r);

	  }
	}
	else{
	  for(int j = 0; j < m; j++){
		matrix[i][j] = min_r + rand()%(max_r + 1 - min_r);
	  }
	}
  }
  return;
}
void NumberOfRow(int**&matrix, int I, int J) {
  int m = J/2;
  int sum;
  for (int i = 0; i < I; i++) {
	sum = 0;
	if ((i%2!=0) && (J%2==1)) {
	  for (int j = 0; j < m + 1; j++) {

		if (matrix[i][j] >= 0)
		  sum++;

	  }
	} else {
	  for (int j = 0; j < m; j++) {
		if (matrix[i][j] >= 0)
		  sum++;
	  }
	}

	if (sum==m) {
	  std::cout << "first line containing no negative elements is  " << i << std::endl;
	  break;
	}

	if (sum==0) {
	  std::cout << "There is no lines without negative elements" << std::endl;
	}
  }
}
void EnterManuallyMatrix(int**&matrix,int I, int J){

  int m;
  if(J%2!=0)
  {
	m=(J/2+1);
  }
  else
  {
	m=(J/2);
  }
  std::cout<<"Enter  necessary  "<<I*J/2<<"  array elements"<<std::endl;
  for(int i=0;i<I;i++) {
	if (i%2!=0) {
	  for (int j = 0; j < m; j++)
		std::cin >> matrix[i][j];

	}
	else {
	  for (int j = 0; j < J/2; j++)
		std::cin >> matrix[i][j];
	}
  }
  return;
}

void PrintMatrix( int**&matrix, int I, int J){
  for(int i = 0;i < I;i++) {
	for (int j = 0; j < J; j++) {
	  std::cout<<std::setw(5) << GetElementOfMatrix(matrix, i, j) << "  ";
	}
	std::cout << std::endl;
  }
  return;
}


using namespace std;
int main() {
  int row, column, kChooseTheEnterenceOfMatrix;
  cout << "enter number of rows" << endl;
  cin >> row;
  cout << "enter number of columns" << endl;
  cin >> column;
  if (column > 10 || row > 10) {
	cout << "the array size must be <10 " << endl;
	return 0;
  }
  int **matrix = new int *[row];
  for (int i = 0; i < row; i++) {
	matrix[i] = new int[column];
  }
  cout << "Do you want to enter matrix randomly--1, or manually--2" << endl;
  cin >> kChooseTheEnterenceOfMatrix;
  if (kChooseTheEnterenceOfMatrix==1) {
	EnterRandomMatrix(matrix, row, column);
  } else {
	EnterManuallyMatrix(matrix, row, column);
  }
  PrintMatrix(matrix, row, column);

  NumberOfRow(matrix, row, column);
//	for(int j=0;j<column;j++) {
//	 for(int i=0;i<row;i++) {
//	   int sum=0;
//	   sum+=GetElementOfMatrix(matrix,i,j);
//	 }
//	}
  for (int i = 0; i < row; i++) {
	delete[] matrix[i];
  }//FreeMemory
  delete[] matrix;

  return 0;
}