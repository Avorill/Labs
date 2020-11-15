#include "Student.h"
#include <iostream>
int Student::Id = 0;
int Student::numberOfRecordBook = 20;
Student::Student(char *nname,int course, int group)
{
 name = nname;
 numberOfCourse=course;
 numberOfGroup=group;
 Id++;
 numberOfRecordBook++;
}
Student::Student(const Student & a) {
  name=a.name;
  numberOfCourse=a.numberOfCourse;
  numberOfGroup=a.numberOfGroup;
  Id++;
  numberOfRecordBook = a.numberOfRecordBook;
  numberOfRecordBook++;
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