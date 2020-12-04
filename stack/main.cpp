#include <iostream>
#include "StackForCalculator.h"
using namespace std;


int main()
{

  Stack <int> st1;
  st1<<5;
  st1<<9;
  st1<<13;
  st1<<7;
  st1.Print();
   int t = st1[2];
   cout<<endl;
   cout<<"\n";
   int a;
  cout<<(st1 >> a)<<endl;
  cout<<(st1 >> a)<<endl;
  cout << "Count: " << st1.Count() << endl;
  Stack<int> st2;
  st2 = st1;
  if(st2 == st1){
	cout<<"Same sizes"<<endl;
  }
  else
	cout<<"Different sizes"<<endl;

  if(st1 < st2)
	cout<<" stacks are different"<<endl;
  else
	cout<<"We can definetely say, that str1 no less, then str2"<<endl;



//    cout<<" The second item of stack:  "<<t<<endl;
//  int t;
//  st1>>t;
//  cout << "Delete item: " << t << endl;
  st1.Print();
  cout << "Head: " << st1.Head() << endl;
  st1.pop();
  st1.Print();

  if (st1.IsEmpty())
	cout << "Stack is empty." << endl;
  else
	cout << "Stack is not empty" << endl;

  cout << "Stack st2:" << endl;
  st2.Print();

  return 0;
}