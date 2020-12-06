
#ifndef KR2_GR4_ULNIROVA_POLINA__BIDIRECTIONAL_LIST_ON_ARRAY_H_
#define KR2_GR4_ULNIROVA_POLINA__BIDIRECTIONAL_LIST_ON_ARRAY_H_
#include <iostream>
#include <vector>
namespace containers{
template <typename T>
class BiDirectionalListOnArray {
 private:
  T *data_;
  size_t size_ = 0;
  size_t capacity_ = 1;


  static const size_t MIN_CAPACITY = 10;
  static const size_t GROWTH_FACTOR = 2;

 public:
  BiDirectionalListOnArray() {
	data_ = new T [capacity_];
  }
  ~BiDirectionalListOnArray() {
    delete[] data_;
  }
  BiDirectionalListOnArray(const std::initializer_list<T> &list){
	BiDirectionalListOnArray();
	for(const auto &item : list){
	  PuchBack(item);
	}
  }
  BiDirectionalListOnArray(const BiDirectionalListOnArray<T>& copy){
    copy.capacity_= capacity_;
    copy.size_ = size_;
    copy.data_ = data_;


  }
  BiDirectionalListOnArray &operator=(const BiDirectionalListOnArray<T> &copy){
	size_=copy.size_;
	capacity_=copy.capacity_;
	delete [] data_;
	data_ = new T[capacity_];
	for(size_t i = 0; i<capacity_; ++i){
	  data_[i] = copy.data_[i];
	}
	return *this;

  }
  BiDirectionalListOnArray(BiDirectionalListOnArray<T> &&move_list) noexcept {
	size_ = std::move(move_list);
	capacity_ = std::move(move_list);
	move_list.size_ = 0;
	move_list.capacity_ = MIN_CAPACITY;
  }
//  BiDirectionalListOnArray &operator=(BiDirectionalListOnArray<T> &&move) noexcept {
//
//  }
  int Size(){
	return size_;
  }
  bool IsEmpty() const{
	return size_ == 0;
  }
  std::vector<T> ToVector() const {
	std::vector<T> vector[size_];
	for(size_t i = 0; i< size_; i++) {
	  vector.push_back(data_[i]);
	}
	return vector;
  }
  T*front(){
	return data_[0];
  }
  T* back(){
	return data_[size_-1];
  }
  void PushFront(const T& value) {
	if (size_!=capacity_) {
	  for (size_t i = size_; i > 0; i--) {
		data_[i] = data_[i - 1];
	  }
	  data_[0] = std::move(value);
	  ++size_;
	} else {
	  std::cerr << "Error" << std::endl;
	}
  }
  void PushBack(const T& value) {
     if(size_ != capacity_){
       data_[size_+1] = std::move(value);
     }
     else
	 {
       std::cerr<<"error"<<std::endl;
	 }
  }
  void PushFront(T&& value) {
     if(size_ != capacity_){
       for(size_t i = size_; i>0;--i){
         data_[i] = std::move(value);
         ++size;
       }
     }
     else
       std::cerr<<"Error"<<std::endl;
  }
  const T&operator[](int index) const{
	if(index<0 || index> size_){
	  return -1;
	}
	else{
	  return data_[index];
	}
  }
  T&operator[](int index) {
	if(index<0 || index> size_){
	  return -1;
	}
	else{
	  return data_[index];
	}

  }
  void PushBack(T&& value) {

	if(size_ != capacity_){
	  data_[size_+1] = std::move(value);
	}
	else
	{
	  std::cerr<<"error"<<std::endl;
	}
  }

  T PopFront() {
	T popfront;
	popfront = data_[0];
	Erase(0);
  }
  T PopBack() {
	if (size > 0){
	  T pop;
	pop = data_[size_];
	size_--;
	return pop;
  }
  else
    return -1;
  }
  T InsertBefore(size_t index, const T& value) {
		if(size_ != capacity_){
		  for( size_t i = size_;i>index; --i) {
		    data_[i] = data_[i - 1];
		  }
		  data_[index] = value;
		  size_++;
		}
		else
		  return  -1;
  }
  T InsertAfter(size_t index, T& value) {
     InsertBefore(index+1, value);
  }
  T InsertBefore(size_t index, T&& value) {
	if(size_ != capacity_){
	  for( size_t i = size_;i>index; --i) {
		data_[i] = data_[i - 1];
	  }
	  data_[index] = value;
	  size_++;
	}
	else
	  return  -1;
  }
//  T InsertAfter(size_t index, T&& value) {
//
//  }
  void Erase(size_t index){
	for(size_t i = index; i+1 < size_; ++i){
	  data_[i] = data_[i+1];
	}
	size_--;
  }
  int Find(const T& value) {
	for (int i = 0; i < size_; i++) {
	  if (value==data_[i]) {
		return i;

	  }

	}
	return -1;
  }
  std::vector<int>FindAll(const T& value){
		std::vector<int> result;
		for(int i = 0; i< size_; i++){
		  if(value == data_[i]){}
		  	result.push_back(i);
		}
		return result;
  }
//  BiDirectionalListOnArray& operator[](){}

};

}
#endif //KR2_GR4_ULNIROVA_POLINA__BIDIRECTIONAL_LIST_ON_ARRAY_H_
