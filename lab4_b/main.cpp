#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;
int main() {
  ifstream fin("ProjectB.txt");
  ofstream fout("ProjectBout.txt");

  char buffer[300];
  while (fin.getline(buffer, 300))
  {
	buffer[0]=toupper(buffer[0]);
	fout<<buffer[0];
	cout<<buffer[0];
	for(int i=2;i<strlen(buffer);i++){
	  if(buffer[i] != ' ' && buffer[i-1] == ' '){
		buffer[i] = toupper(buffer[i]);
	  }
	  fout<<buffer[i];
	  cout<<buffer[i];
	}
	cout << endl;
	fout << endl;
  }

  return 0;
}