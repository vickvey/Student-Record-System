
//-----------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "constants.h"

void setDept(char strings[NUM_OF_DEPTS][DEPT_STRING]) {
  strcpy(strings[0], "CSE");
  strcpy(strings[1], "ECE");
  strcpy(strings[2], "EE");
  strcpy(strings[3], "MECH");
  strcpy(strings[4], "CHE");
  strcpy(strings[5], "CIV");
}

const char *dept_to_string (Dept *_dept, 
  char strings[NUM_OF_DEPTS][DEPT_STRING]) {
  return strings[*_dept];
}

void takeDeptInput (Dept *_dept, 
  char strings[NUM_OF_DEPTS][DEPT_STRING]) {
  int _input = -1;
  while(1) {
    for(int i = 0; i<NUM_OF_DEPTS; i++) {
      printf("Press %d : for %s departement.\n", i, strings[i]);
    }  
    puts("--> Please enter the correct input : \n"); 
    scanf("%d", &_input);
    if(_input >= 0 && _input < NUM_OF_DEPTS) {
      break;
    } puts("Error: Invalid Input!- Please enter again!\n");
  }
  *_dept = _input;
}
//------------------------------------------------------------------
