#pragma  once
#include "StackForCalculator.h"
#include <iostream>
#include <string>
#include <ctype.h>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include<iterator>
  int prior(std::string ch) {//priority of operations
    if(ch == "^") return 10;
	if (ch=="*" || ch=="/") return 2;
	if (ch=="+" || ch=="-") return 1;
	if( ch == "(" || ch ==")") return 0;
	return -1;
  }

  bool isOperator(std::string ch){
    if((ch == "^") || (ch == "*") ||
    (ch == "/") || (ch == "-") || (ch == "+")) {
      return true;
    }
    else return false;

  };
  bool isOperator(char ch){
  if((ch == '^') || (ch == '*') ||
	  (ch == '/') || (ch == '-') || (ch == '+')) {
	return true;
  }
  else return false;

};


  bool neg_number = false;
  bool previous_bracket= false;
  bool operat = false;


float scanNum(char ch){
  int value;
  value = ch;
  return float(value-'0');//return float from character
}
  bool brackets(std::string &s){//problems with brackets or not
    int open_br = 0, close_br = 0;
    for(int i = 0 ; i < s.size(); i++ ){
      if(s[i] == '(') open_br++;
      if(s[i] == ')') close_br++;
    }
    if(close_br == open_br) return true;
    else{
      return false;
    }
  }


  double calculate(char operation, double x, double y){
    if(operation == '+') {
      return x+y;
    }
    if(operation == '-'){
      return x-y;
    }
    if( operation == '*'){
      return x*y;
    }
    if( operation == '/'){
      return x/y;
    }
    if( operation =='^'){
      return pow(x,y);
    }
  }


std::string  parse(std::string s) {
  std::string parse_string;

  if(s[0] == '('){
    previous_bracket = true;
	parse_string += s[0];
	parse_string += ' ';
  }
  if(isdigit(s[0]))
	parse_string +=s[0];
  if(isOperator(s[0]))
    parse_string +=s[0];
  if(s[0]=='-')
    neg_number = true;
  for (int i = 1; i < s.size(); i++) {
	if (isdigit(s[i]) || s[i]=='.') {
	  parse_string += s[i];
	  previous_bracket = false;
	}
	if(s[i]=='('){
	  parse_string += ' ';
	  parse_string += s[i];
	  parse_string += ' ';
	  previous_bracket = true;

	}
	if(s[i] ==')'){
	  parse_string += ' ';
	  parse_string += s[i];
	  parse_string += ' ';
	  previous_bracket=false;
	}
	if (isOperator(s[i])){
	  if(s[i] != '-'){
		parse_string += ' ';
		parse_string += s[i];
		parse_string += ' ';
		previous_bracket = false;
	  }
	  else
	    if(previous_bracket) {
		  parse_string += s[i];
		  previous_bracket = false;
		}
	    else{
		  parse_string += ' ';
		  parse_string += s[i];
		  parse_string += ' ';
		  previous_bracket = false;
	    }

	}
  }
  return parse_string;
}

std::vector<std::string> split(std::string text) {
  std::string line;
  std::vector<std::string> vec;
  std::stringstream ss(text);
  while(std::getline(ss, line, ' ')) {
	vec.push_back(line);
  }
  return vec;
}


 bool priority(std::string s, std::string s2){
    if(s =="^"){
      return prior(s) > prior(s2);
    }
    else {
      return prior(s) <= prior(s2);
    }
  }


 std::string RPN(std::string prc) {
	  Stack<std::string> sta;
	  std::string result;
	  std::string word;
	  double a;
	  std::stringstream ss(prc);
	  while (ss >> word) {
		if (isdigit(word[word.size() - 1])) {
//		  a = atof(word.c_str());
		  result+=(word);

		}
		if(word ==  "("){
		  sta.push(word);
		}
		if( word == ")"){
			while(sta.top() != "("){
			  result+=sta.pop();
			}
			sta.pop();
			continue;
			}
		if(isOperator(word)){
		  while(word.size() > 0 && priority(word, sta.top())) {
			result+=(sta.pop());
		  }
		  sta.push(word);
		}
	  }
	  for(int i=0;i<sta.Count();i++){
		result+=(sta.pop());
	  }
	  return result;
}

float Resulting(std::string postfix){
  int a, b;
  Stack<float> stk;
  std::string::iterator it;
  for(it=postfix.begin(); it!=postfix.end(); it++){
	//read elements and perform postfix evaluation
	if(isOperator(*it) != -1){
	  a = stk.top();
	  stk.pop();
	  b = stk.top();
	  stk.pop();
	  stk.push(calculate(a, b, *it));
	}
	else if(isdigit(*it) > 0){
	  stk.push(scanNum(*it));
	}
  }
  return stk.top();
}

void Run(std::string &rpn){
  auto exp = parse(rpn);
    exp = RPN(exp);
    std::cout<<exp;
    std::cout<<exp<<std::endl;
	auto out = Resulting(exp);
    std::cout<<out<<std::endl;

  }


