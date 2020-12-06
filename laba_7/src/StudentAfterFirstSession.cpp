//
// Created by c5066469 on 13-Nov-20.
//

#include "StudentAfterFirstSession.h"
#include <iostream>
StudentAftFSession::StudentAftFSession(const Student & student, int *FGrades)
: Student(student)
{
  Grades = new int [4];
  for(int i = 0; i < 4; i++){
    Grades[i]=FGrades[i];
  }
}
StudentAftFSession::StudentAftFSession(const StudentAftFSession & student_aft_f_session)
: Student(student_aft_f_session)
{
  Grades =new int [4];
  for(int i = 0; i < 4; i++){
   Grades[i]=student_aft_f_session.Grades[i];
  }
};
StudentAftFSession::StudentAftFSession(char *_name, int group, int course, int *FGrades)
: Student(name,numberOfGroup,numberOfCourse) {
  Grades= new int [4];
  for (int i = 0; i < 4; i++) {
	Grades[i] = FGrades[i];
  }
}
double StudentAftFSession::AverageMark(){
 double averageMark=0;
 for(int i=0;i<4;i++){
   averageMark+=((double)Grades[i]/4);
 }
  return averageMark;
}
int *StudentAftFSession::GetGrades(){
  return Grades;
}
int *StudentAftFSession::ChangeMarks(int* FGrades) {
  Grades = new int [4];
  for(int i=0;i<4;i++){
    Grades[i] = FGrades[i];
  }
 return Grades;
}
std::ostream & operator<<(std::ostream ost, StudentAftFSession& student)
{
 ost<<"name: "<<student.name<<"  course:   "<<student.numberOfCourse<<" group: "<<student.numberOfGroup
 <<"ID: "<<student.GetID()<<"Number of Record Book:  "<<student.GetNumberOfRecBook()
 <<"Marks after first session:  "<<student.Grades[0]<<" "<<student.Grades[1]<<" "<<student.Grades[2]<<" "<<student.Grades[3]<<"\n";

 return ost;
}
