
#include "Student.h"
#ifndef LABA_7__STUDENTAFTERFIRSTSESSION_H_
#define LABA_7__STUDENTAFTERFIRSTSESSION_H_

class StudentAftFSession : public Student
{

 public:
  StudentAftFSession(char* _name, int group, int course, int* FGrades );
  StudentAftFSession(const Student&, int* FGrades);
  StudentAftFSession(const StudentAftFSession&);
  int *GetGrades();
  double AverageMark() override;
  int *ChangeMarks(int* FGrades);
  friend std::ostream & operator <<(std::ostream,StudentAftFSession&);
 protected:
  int *Grades;
};

#endif //LABA_7__STUDENTAFTERFIRSTSESSION_H_
