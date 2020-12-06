#ifndef KR2_GR4_ULNIROVA_POLINA__FILE_READER_H_
#define KR2_GR4_ULNIROVA_POLINA__FILE_READER_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using std::string;
class FileReader {
 public:
  std::vector<string> ReadLines(const string &file_path) {
	std::ifstream fin(file_path);
	std::vector<string> s;
	string line;
	while (std::getline(fin, line)) {
	  s.push_back(line);
	}
	fin.close();
	return s;
  }
  std::vector<string> ReadWords(const string &file_path) {
	std::vector<string> words;
	string word;
	string line;
	std::ifstream fin(file_path);
	while (std::getline(fin, line)) {
	  std::stringstream ss(line);
       while( ss >> word) {
		 words.push_back(word);
	   }
	}
  }
};

#endif //KR2_GR4_ULNIROVA_POLINA__FILE_READER_H_
