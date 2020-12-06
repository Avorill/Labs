#include "word_card.h"
#include "file_reader.h"
#include <map>
#ifndef KR2_GR4_ULNIROVA_POLINA__VOCABULARY_H_
#define KR2_GR4_ULNIROVA_POLINA__VOCABULARY_H_
class Vocabulary {
 public:
  void ReadFileToCards(std::string file_path);
  WordCard *ConvertStringToWordCard(string str);
  void MakeFrequencyVocab();
  void SortWords(); // можно пузырьком 😊
  map<string, size_t> copy_to_map();

 private:
  BiDirectionalListOnArray<WordCard *> list_word_cards;

};

#endif //KR2_GR4_ULNIROVA_POLINA__VOCABULARY_H_
