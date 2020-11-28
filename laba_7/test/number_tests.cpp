#include <gtest/gtest.h>
#include "Student.h"
#include "StudentAfterSecondSession.h"
#include "StudentAfterFirstSession.h"
TEST(CopiedClassStudent, Correct)
{
  Student a("Ivan", 2,3);
  Student b(a);
  EXPECT_EQ(a.GetName(),b.GetName());
  EXPECT_EQ(a.GetGroup(),b.GetGroup());
  EXPECT_EQ(a.GetCourse(),b.GetCourse());
}
TEST(CopiedId, NotSame){
  Student a("Ivan", 2,3);
  Student b(a);
  EXPECT_NE(a.GetID(),b.GetID());
}
TEST(CopiedNumberOfRecordBook, Same)
{
  Student a("Ivan", 2,3);
  Student b(a);
 EXPECT_EQ(a.GetNumberOfRecBook(),b.GetNumberOfRecBook());

}
TEST(UnicalID, Correct)
{
  Student a("Ivan", 1, 3);
  Student b("Katya",1, 10);
  Student c(a);
  EXPECT_NE(a.GetID(),b.GetID());
  EXPECT_NE(a.GetID(),c.GetID());
  EXPECT_NE(b.GetID(), c.GetID());

}
TEST(UnicalRecordBookNumber, Correct)
{
  Student a("Ivan", 1, 3);
  Student b("Katya",1, 10);
  Student c("b",2,4);
  EXPECT_NE(a.GetNumberOfRecBook(),b.GetNumberOfRecBook());
  EXPECT_NE(a.GetNumberOfRecBook(),c.GetNumberOfRecBook());
  EXPECT_NE(b.GetNumberOfRecBook(), c.GetNumberOfRecBook());
}
TEST(DataOfStudent,isCorrect)
{
  Student a("Nikita", 2,4);
  EXPECT_EQ(a.GetCourse(),2);
  EXPECT_EQ(a.GetGroup(),4);
  EXPECT_STREQ(a.GetName(),"Nikita");
}
TEST(SetMethodsofClassStudent,isWorkingCorrectly)
{
  Student a("Sasha",1,1);
  a.SetName("Alexandra");
  a.SetCourse(1);
  a.SetGroup(5);
  EXPECT_STREQ("Alexandra",a.GetName());
  EXPECT_EQ(a.GetCourse(),1);
  EXPECT_EQ(a.GetGroup(),5);

}
TEST(GetStudentAfterFirstSession, Correct)
{

  int *Grades= new int[4] {4,10,5,8};
  Student a("Polina", 1,1);
  StudentAftFSession b(a,Grades);
  EXPECT_STREQ(b.GetName(),"Polina");
  EXPECT_EQ(b.GetGroup(),1);
  EXPECT_EQ(b.GetCourse(),1);
  for(int i=0;i<4;i++){
    EXPECT_EQ(b.GetGrades()[i],Grades[i]);
  }

}
TEST(CopyOfStudentAfterFirstSession, Correct)
{
  int *Grades= new int[4] {4,10,5,8};
  Student a("Polina", 1,1);
  StudentAftFSession b(a,Grades);
  StudentAftFSession c(b);
  EXPECT_STREQ(b.GetName(),c.GetName());
  EXPECT_EQ((b.GetCourse()),c.GetCourse());
  EXPECT_EQ(b.GetGroup(),c.GetGroup());
  for(int i=0;i<4;i++)
  {
    EXPECT_EQ(b.GetGrades()[i],c.GetGrades()[i]);
  }

}
TEST(AverageMarkForStudentAftFSession, Correct)
{
  int* Grades= new int[4] {1,2,3,4};
  Student a("h",1,1);
  StudentAftFSession b(a,Grades);
  EXPECT_EQ(b.AverageMark(),2.5);

}
TEST(ChangeMarksMethod, Correct)
{

  int* Grades= new int[4] {1,2,3,4};
  Student a("h",1,1);
  StudentAftFSession b(a,Grades);
  int*FGrades = new int[4] {4,5,6,7};
  b.ChangeMarks(FGrades);
  for(int i=0;i<4;i++){
    EXPECT_EQ(b.GetGrades()[i],FGrades[i]);
  }

}

TEST(Get2MethodForSecondAftSecSession, Correct)
{
  int* FGrades = new int[4] {1,2,3,4};
  int* SGrades= new int[5] {1,2,3,4,5};
  Student a("h",1,1);
  StudentAftFSession c(a,FGrades);
  StudentAftSecSession b(c,SGrades);
  EXPECT_STREQ(b.GetName(),"h");
  EXPECT_EQ(b.GetCourse(),1);
  EXPECT_EQ(b.GetGroup(),1);
  for(int i = 0; i < 5; i++ )
  {
	EXPECT_EQ(b.GetGrades2()[i],SGrades[i]);
  }

}
TEST(CopyOfSecondSessionStudent, Correct)
{
  int* FGrades = new int[4] {1,2,3,4};
  int* SGrades= new int[5] {1,2,3,4,5};
  Student a("h",1,1);
  StudentAftFSession c(a,FGrades);
  StudentAftSecSession b(c,SGrades);
  StudentAftSecSession q(b);
  EXPECT_STREQ(b.GetName(),q.GetName());
  EXPECT_EQ(b.GetCourse(),q.GetCourse());
  EXPECT_EQ(b.GetGroup(),q.GetGroup());
  for(int i = 0; i < 5; i++ )
  {
	EXPECT_EQ(b.GetGrades2()[i],q.GetGrades2()[i]);
  }


}
TEST(AverageMarkForSecSessionStudent, Correct)

{
  int* FGrades = new int[4] {1,4,2,5};
  int* SGrades= new int[5] {1,2,3,4,5};
  Student a("h",1,1);
  StudentAftFSession c(a,FGrades);
  StudentAftSecSession b(c,SGrades);
  EXPECT_EQ(b.AverageMark(),3);
}
TEST(ChangeGradesForStudentAftSecSession, Correct)
{
  int* FGrades = new int[4] {1,4,2,5};
  int* SGrades= new int[5] {1,2,3,4,5};
  int*ChangeGrades = new int [5] {0,0,0,0,0};
  Student a("h",1,1);
  StudentAftFSession c(a,FGrades);
  StudentAftSecSession b(c,SGrades);
  b.ChangeGrades2(ChangeGrades);
  for(int i = 0; i<5; i++)
  {
    EXPECT_EQ(b.GetGrades2()[i], ChangeGrades[i]);
  }
}


