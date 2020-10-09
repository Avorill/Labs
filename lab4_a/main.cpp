///программа должна демонстрировать возможности работы
/// с разработанной Вами функцией для работы со строками
///написать собственную реализацию strcspn( возвращает длину наяальной подстроки из string,
/// не содержащей символов из множества strCharSet
#include <iostream>
#include <fstream>

using namespace std;

int _strcspn(const char *string, const char *strCharSet) {
  int n=0;
  const char *copy;
  while(*string!='\0') {
	for (copy = strCharSet; *copy!='\0'; copy++) {
	  if (*string==*copy) {
		return n;
	  }
	}
	n++;
	string++;
  }
  return n;
}





int main() {

  char Text[300];
  char TextCheck[300];
  ifstream  fin("Poroject_A.txt");
  cout<<"string    strCharSet"<<endl;
  while(!fin.eof()) {
	while (fin >> Text) {
	  if (!fin.is_open())
		cout << "can't read file, sorry\n";
	  else {

		fin >> TextCheck;
		cout << Text<<" ";
		cout << TextCheck<<'\n' ;
		cout << _strcspn(Text, TextCheck) << endl;
	  }
	}
  }
  fin.close();

  return 0;
}