#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;
int main() {
  ifstream fin("ProjectB.txt");
  ofstream fout("ProjectBout.txt");
  if(fin) {
	fin.seekg(0, fin.end);//Sets the position of the next character to be extracted from the input stream.
	int len = fin.tellg();//Returns the position of the current character in the input stream.
	fin.seekg(0,fin.beg);//
	char *buffer = new char[len];
	fin.read(buffer,len);
	buffer[0]=toupper(buffer[0]);
	fout<<buffer[0];
	cout<<buffer[0];
	for(int i=2;i<len;i++){
	  if(buffer[i] != ' ' && buffer[i-1] == ' '){
		buffer[i] = toupper(buffer[i]);
	  }
	  fout<<buffer[i];
	  cout<<buffer[i];
	}
	fin.close();
	delete [] buffer;
  }

  return 0;
}