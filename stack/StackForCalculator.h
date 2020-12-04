//
// Created by c5066469 on 04-Dec-20.
//

#ifndef STACK__STACKFORCALCULATOR_H_
#define STACK__STACKFORCALCULATOR_H_

template <typename T>
class Stack
{
 private:
  T* stack;
  int count;

 public:

  Stack()
  {
	stack = nullptr;
	count = 0;
  }
  void push(T item)
  {
	T* tmp;
	tmp = stack;
	stack = new T[count + 1];
	count++;
	for (int i = 0; i < count - 1; i++)
	  stack[i] = tmp[i];
	stack[count - 1] = item;
	if (count > 1)
	  delete[] tmp;

  }

  T pop()
  {
	if (count == 0)
	  return 0; // стек пуст
	count--;
	return stack[count];
  }

  T Head()
  {
	if (count == 0)
	  return 0;
	return stack[count - 1];
  }



  Stack(const Stack& st)
  {
	stack = new T[st.count];
	count = st.count;
	for (int i = 0; i < count; i++)
	  stack[i] = st.stack[i];
  }
  ~Stack()
  {
	if (count > 0)
	  delete[] stack;
  }
  int Count() const
  {
	return count;
  }
  bool IsEmpty()
  {
	return count == 0;
  }
  void Print()
  {
	T* p;
	p = stack;
	cout << "Stack: " << endl;
	if (count == 0)
	  cout << "is empty." << endl;

	for (int i = 0; i < count; i++)
	{
	  cout << "Item[" << i << "] = " << *p << endl;
	  p++;
	}
	cout << endl;
  }
  bool operator <(const Stack&st){
    return count<st.Count();

  }
  bool operator ==(const Stack&st){
    return count == st.Count();
  }
  Stack operator=(const Stack& st)
  {
	if (count > 0)
	{
	  count = 0;
	  delete[] stack;
	}
	stack = new T[st.count];
	count = st.count;
	for (int i = 0; i < count; i++)
	  stack[i] = st.stack[i];


	return *this;
  }
  Stack operator<<(T item){
	T* tmp;
	tmp = stack;
	stack = new T[count + 1];
	count++;
	for (int i = 0; i < count - 1; i++)
	  stack[i] = tmp[i];
	stack[count - 1] = item;
	if (count > 1)
	  delete[] tmp;

	return *this;
  }
//T& operator >>(T item){
//  if(count ==0)
//    exit(-101);
//  count--;
//  return stack[count];
//  }
  T operator>>(T & item ){
	item = Head();
	this->pop();
	return item;
  }
T& operator[](const int i){
    return stack[i];
  }
};
#endif //STACK__STACKFORCALCULATOR_H_
