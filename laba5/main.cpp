//information, including text, number of repetitions and number of first line
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void interviewingUser(string& Answer){

  do {
	cout << "Do you want to open the file ? (yes, no) " << endl;
	cin >> Answer;
  }
  while(Answer!="yes");
}

int main() {
  string Answer;
  string fileOutput;
  interviewingUser(Answer);
  ifstream fin("fin.txt");
  ofstream fout("fout.txt");
  cout << " Do you want to see file consisting? (yes,no)" << endl;
  cin >> Answer;
  if (Answer=="yes") {
	  if (fin.is_open()) {
		while (getline(fin, fileOutput)) {
		  cout << fileOutput << "\n";
		}
	  }
  }
  cout << "----------------" << endl;
  fin.close();
  fin.open("fin.txt");
  vector<string> Text;
  string Line;
  if (fin.is_open()) {
	  while (getline(fin, Line)) {
		Text.push_back(Line);
	  }
  }
  int count=1;
  for(int i=1; i<Text.size();i++) {
	if (Text[i-1]==Text[i ]) {
	  Text[i ] = Text[i-1];
	  count++;
	}
	else {
	  cout << "The line \"" << Text[i-1] << "\" number " << i - count << "  occurrences " << count << endl;
	  fout << "The line \"" << Text[i-1] << "\" number " << i - count << "  occurrences " << count << endl;
	  count = 1;
	}
	if(i==Text.size()-1){
	  cout << "The line \"" << Text[i] << "\" number " << i+1 - count << "  occurrences " << count << endl;
	  fout << "The line \"" << Text[i] << "\" number " << i+1 - count << "  occurrences " << count << endl;
	}
  }

 return 0;
}