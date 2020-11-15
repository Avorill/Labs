#include "Student.h"
#include "StudentAfterFirstSession.h"
#ifndef LABA_7__STUDENTAFTERSECONDSESSION_H_
#define LABA_7__STUDENTAFTERSECONDSESSION_H_

class StudentAftSecSession : public StudentAftFSession
{
 public:
  StudentAftSecSession(const Student&, int* SGrades);
  StudentAftSecSession(const StudentAftFSession &student, int *SGrades);
  StudentAftSecSession(const StudentAftSecSession &student);
  int *GetGrades2();
  double AverageMark() override;
  int *ChangeGrades2(int* SGrades);
  friend std::ostream & operator <<(std::ostream &ost,StudentAftSecSession&);
 protected:
  int *Grades2;

};

#endif //LABA_7__STUDENTAFTERSECONDSESSION_H_
