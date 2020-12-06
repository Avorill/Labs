#ifndef KR2_GR4_ULNIROVA_POLINA__WORD_CARD_H_
#define KR2_GR4_ULNIROVA_POLINA__WORD_CARD_H_
#include <iostream>
using std::string;
#include "file_reader.h"
class WordCard {
 public:

  WordCard(){
   word_ ="";
   size_t counter_;
  }
  ~WordCard(){}
  WordCard(const string& s ){
    word_ = s;
    counter_ = 0;
  }

  WordCard(const WordCard& other){
    word_ = other.word_;
    counter_ = other.counter_;
  }
  WordCard operator=(const WordCard& other){
    if(this == &other){
      return *this;
    }
    word_ = other.word_;
    counter_ = other.counter_;
    return *this;
  }

  WordCard(WordCard &&other) noexcept{
    word_ = other.word_;
    counter_ = other.counter_;
    other.word_ = "";
    other.counter_ = 0;
  }
  WordCard &operator=(WordCard &&other) noexcept{
	if (this == &other) {
	  return *this;
	}
	word_ = other.word_;
	counter_ = other.counter_;
	other.word_ = "";
	other.counter_ = 0;
	return *this;
  }
  string GetWord(){
    return word_;
  }
  size_t GetCounter(){
    return counter_;
  }

  void IncCounter(){
    counter_++;
  }

  bool operator==(WordCard &other){
    return word_ == other.GetWord();
  }
  bool operator!=(WordCard &other){
    return word_ != other.GetWord();
  }

  bool operator<( WordCard &first);

 private:
  string word_;
  size_t counter_;
};


#endif //KR2_GR4_ULNIROVA_POLINA__WORD_CARD_H_
