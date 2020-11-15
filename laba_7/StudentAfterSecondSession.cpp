//
// Created by c5066469 on 13-Nov-20.
//
#include <iostream>
#include "StudentAfterSecondSession.h"
StudentAftSecSession::StudentAftSecSession(const StudentAftFSession & student,  int *SGrades)
	: StudentAftFSession(student)
{
  Grades2 = new int [5];
  for(int i = 0; i < 5; i++){
	Grades2[i]=SGrades[i];
  }
}
StudentAftSecSession::StudentAftSecSession(const StudentAftSecSession & student_aft_s_session)
	: StudentAftFSession(student_aft_s_session)
{
  Grades2 = new int [5];
  for(int i = 0; i < 5; i++){
	Grades2[i]=student_aft_s_session.Grades2[i];
  }
};
StudentAftSecSession::StudentAftSecSession(const Student &student, int *SGrades)
    :StudentAftFSession(student,SGrades)
{
  Grades2 = new int [5];
  for(int i = 0; i < 5; i++ )
  {
    Grades2[i] = SGrades[i];
  }

}
int *StudentAftSecSession::GetGrades2() {
  return Grades2;
}
double StudentAftSecSession::AverageMark()
{
  double averageMark=0;
  for(int i = 0; i < 5; i++){
    averageMark+=Grades2[i]/5;
  }
 for(int i = 0;i < 4; i++){
   averageMark+=Grades[i]/4;
 }
 averageMark = averageMark/2;
 std::cout<<"The average mark of holl year is"<<averageMark<<"\n";
 return averageMark;
}
int *StudentAftSecSession::ChangeGrades2(int* SGrades)

{
  Grades2 = new int [5];
  for(int i = 0;i < 5; i++)
  {
    Grades2[i] = SGrades[i];
  }
  return Grades2;
}
std::ostream & operator <<(std::ostream &ost,StudentAftSecSession&student){
  ost<<"name: "<<student.name<<"  course:  "<<student.numberOfCourse<<"   group: "<<student.numberOfGroup
	 <<"  ID: "<<student.GetID()<<"   Number of Record Book:  "<<student.GetNumberOfRecBook()
	 <<"   marks after first session:  "<<student.Grades[0]<<" "<<student.Grades[1]<<" "
	 <<student.Grades[2]<<" "<<student.Grades[3]<<"\n";
  ost<<"Marks after second session: ";
  for(int i = 0;i < 5;i++){
    ost<<student.Grades2[i]<<"  ";
  }
  return ost;
}