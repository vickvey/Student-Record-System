

//-----------------------------------------------------------
#ifndef STUDENT_H_
#define STUDENT_H_

#include "constants.h"

// User defined enum Dept which stands for Department
typedef enum Dept Dept;
// User defined data-type Student
typedef struct Student Student;

enum Dept {
  CSE = 0, ECE = 1, EE = 2, MECH = 3, CHE = 4, CIV = 5
};

const char *dept_to_string (Dept *_dept, 
  char strings[NUM_OF_DEPTS][DEPT_STRING]);

struct Student {
  char name[50];
  int uniqueID;
  Dept dept;
};

void setDept(char strings[NUM_OF_DEPTS][DEPT_STRING]);
const char *dept_to_string (Dept *_dept, 
  char strings[NUM_OF_DEPTS][DEPT_STRING]);
void takeDeptInput (Dept *_dept, char strings[NUM_OF_DEPTS][DEPT_STRING]);

#endif
//-----------------------------------------------------------