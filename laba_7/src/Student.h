


#include <string>
#pragma  once
class Student {
 private:
  	 static int identifier;
  	 static int nRB;
  	 int Id;
  	 int numberOfRecordBook;

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
