

#ifndef LABA_7__STUDENT_H_
#define LABA_7__STUDENT_H_
#include <string>

class Student {
 private:
  	 static int Id;
  	 static int numberOfRecordBook;
//  	 static int CoID;
//  	 static int ReB;
 protected:
  	char *name;
  	int numberOfCourse;
  	int numberOfGroup;
 public:
  	void Print();
  	Student(char*, int, int);
  	Student(const Student &);
  	char* GetName();
  	int GetCourse();
  	int GetGroup();
  	int GetID();
  	int GetNumberOfRecBook();
  	void SetName(char* _name);
  	void SetCourse(int course);
  	void SetGroup( int group);
  	virtual double AverageMark();
    friend std::ostream & operator <<(std::ostream &, Student& );
};

#endif //LABA_7__STUDENT_H_
