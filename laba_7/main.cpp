#include <iostream>
#include "src/Student.h"
#include "src/StudentAfterFirstSession.h"
#include "src/StudentAfterSecondSession.h"
int main() {
  Student firstStudent("Ivan",1,10);
  int* FirstSetOfMarks = new int[4] {2,4,6,8};
  int* SecSetOfMarks =  new int[5]  {1,3,5,7,9};
  StudentAftFSession fstudent(firstStudent,FirstSetOfMarks);
  fstudent.ChangeMarks(FirstSetOfMarks);
  StudentAftSecSession sstudent(fstudent, SecSetOfMarks);
//  std::cout << fstudent<<"\n";
  std::cout << sstudent<<"\n";
  fstudent.AverageMark();
  sstudent.AverageMark();
  return 0;
}
