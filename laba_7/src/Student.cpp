#include "Student.h"
#include <iostream>
int Student::identifier = 0 ;
int Student::nRB = 20200;
Student::Student(char *nname,int course, int group)
{

 name = nname;
 numberOfCourse=course;
 numberOfGroup=group;
 identifier++;
 nRB++;
 Id = identifier;
 numberOfRecordBook = nRB;

}
Student::Student(const Student & a) {
  name=a.name;
  numberOfCourse=a.numberOfCourse;
  numberOfGroup=a.numberOfGroup;
  identifier ++;
  Id = identifier;
  numberOfRecordBook = a.numberOfRecordBook;
  nRB++;
}
char* Student::GetName() {
  return name;
}
int Student::GetCourse() {
  return numberOfCourse;
}
int  Student::GetGroup() {
  return numberOfGroup;
}
int Student::GetID() {
  return Id;
}
int Student::GetNumberOfRecBook() {
  return numberOfRecordBook;
}
void Student::SetGroup(int group) {
  numberOfGroup=group;
}
void Student::SetCourse(int course) {
  numberOfCourse=course;
}
void Student::SetName(char *nname) {
  	name = nname;
  }
double Student::AverageMark() {
  return 0;
}
std::ostream & operator<<(std::ostream & ost,Student& student){
  ost<<"name: "<<student.name<<"  course:   "<<student.numberOfCourse
  <<"  group:  "<<student.numberOfGroup<<"  Number of Record Book:   "<<student.numberOfRecordBook
  <<"ID: "<<student.Id<<"\n";

  return ost;
}