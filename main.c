
#include <stdio.h>
#include <stdlib.h>
#include "constants.h"
#include "student.h"
#include "student.c"
#include "dynarray.h"
#include "dynarray.c"
#include "studentdata.h"
#include "studentdata.c"

// setting the department name strings globally
char strings[6][10];

void welcome();
void pause();
void instructions();
void getStudentInput(Student *_student);
void viewStudent(const vector *_vector, int _uniqueID);
void deltStudent(vector *_vector, int _uniqueID);
void viewAllStds(const vector *_vector);

int main() {
  // code here
  //---------------------------------------------------
  // initialising the vector
  vector v;
  VECTOR_INIT(&v);
  //setting departments
  setDept(strings);

  // initialising the database
  dataIO database;
  getting_dataIO_ready(&database, "data.bin");
  // loading from file
  database.load(&database, &v);

  int input, uniqueID, p = 1;
  char next = 'y';
  Student student;
  //---------------------------------------------------

  // execution-----------------------------------------
  welcome();

  while (1) {
    instructions();
    scanf("%d", &input);
    switch (input) {
      case 1:
        // add student
        system(clear);
        do {
          getStudentInput(&student);
          v.push_back(&v, &student);
 
          puts("\nAdd another student :\nPress 1 for yes ,\n else press 0\n");
          scanf("%d", &p);
        } while (p == 1);
        break;
      case 2:
        // view student
        system(clear);
        puts("\n\nEnter the uniqueID of the student you want to view.");
        scanf("%d", &uniqueID);
        viewStudent(&v, uniqueID);
        pause();
        break;
      case 3:
        // delete student
        system(clear);
        puts("\n\nEnter the uniqueID of the student you want to delete : \n");
        scanf("%d", &input);

        deltStudent(&v, input);
        pause();
        break;
      case 4:
        // view all students
        system(clear);
        viewAllStds(&v);
        pause();
        break;
      case 0:
        // exit the program
        system(clear);
        next = 'n';
        puts("\n\nProgram exited successfully!!!\n\n");
        puts("\n\nThanks! Have a nice day:)\n\n");
        break;
      default:
        puts("\n\nInvalid Input!!\n\n");
        break;
    }

    if(next == 'n') {
      break;
    }
  }

  // saving the data
  database.save(&database, &v);
  VECTOR_DEST(&v);
  return 0;
}

void welcome() {
  system(clear);
  puts("\n\n--------------------------------------------------------------\n\n");
  puts("\n\n \tWelcome to the Student Info Storage Database !!\n\n");
  puts("\t\tPress any key to continue : \n\n");
  puts("\n\n--------------------------------------------------------------\n\n");
  getchar();
}

void instructions() {
  system(clear);
  puts("\n\n--------------------------------------------------------------\n\n");
  puts("\n\tPress 1 : to add a student to database.\n");
  puts("\n\tPress 2 : to view a student from database.\n");
  puts("\n\tPress 3 : to delete a student from database.\n");
  puts("\n\tPress 4 : to view all students from database.\n");
  // continue to add more functionality
  puts("\n\tPress 0 : to exit the program.\n");
  puts("\n\n--------------------------------------------------------------\n\n");
}

void getStudentInput(Student *_student) {
  if(_student == NULL) {
    perror("Error: Invalid operation - pointer is NULL.\n");
    exit(1);
  }
  puts("\n\nEnter the student details : \n");
  printf("\n\nEnter the student's name : \n");

  // Clear input buffer
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {}
  fgets(_student->name, sizeof(_student->name), stdin);

  // Remove the newline character if present
  size_t len = strlen(_student->name);
  if (len > 0 && _student->name[len - 1] == '\n') {
    _student->name[len - 1] = '\0'; // Replace '\n' with '\0'
  }

  puts("\n\nEnter the student's departement : ");
  takeDeptInput(&_student->dept, strings);

  puts("\n\nEnter the uniqueID of the student: \n");
  scanf("%d", &_student->uniqueID);
}

void viewStudent(const vector *_vector, int _uniqueID) {
  char output_dept[10];
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    exit(1);    
  }
  for(int i = 0; i<_vector->currSize; i++) {
    if(_vector->array[i].uniqueID == _uniqueID) {
      puts("\n\nSTUDENT DATA FOUND\n\n");
      printf("\nThe name of the student is : %s\n\n", _vector->array[i].name);
      strcpy(output_dept, dept_to_string(&_vector->array[i].dept, strings));
      printf("\nThe dept of the student is : %s\n\n", output_dept);
  printf("\nThe uniqueID of the student is : %d\n\n", _vector->array[i].uniqueID);
      return;
    }
  }
  puts("\n\nStudent with given uniqueID not found in the database\n\n");
}

void deltStudent(vector *_vector, int _uniqueID) {
  if (_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    exit(1);
  }
  if (_vector->currSize < 1) {
    printf("\n\nNo students in the database.\n\n");
    return;
  }

  for(int i = 0; i<_vector->currSize; i++) {
    if(_vector->array[i].uniqueID == _uniqueID) {
      // if the found index is last index in the vector
      if(i == _vector->currSize-1) {
        _vector->pop_back(_vector);
        puts("\n\nStudent successfully removed from database.\n\n");
        return;
      }

      // found index is from 0 <= i <= vector_size-2
      for(int j = i; j<_vector->currSize-1; j++) {
        _vector->array[j] = _vector->array[j+1];
      } 
      _vector->currSize--; 
      puts("\n\nStudent successfully removed from database.\n\n");
      return;
    }
  } printf("\n\nStudent with given uniqueID not found in the database\n");
  return;
}

void viewAllStds(const vector *_vector) {
  char output_dept[10];
  if (_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    exit(1);
  }

  if (_vector->currSize < 1) {
    puts("\n\nNo students in the database.\n\n");
    return;
  }

  puts("\n\n\t\tALL STUDENT DATA\n\n");

  for (int i = 0; i < _vector->currSize; i++) {
    puts("\n\n---------------------------------------------\n");
    printf("\tStudent #%d:\n", i + 1);
    printf("\tName: %s\n", _vector->array[i].name);
    strcpy(output_dept, dept_to_string(&_vector->array[i].dept, strings));
    printf("\tDept : %s\n", output_dept);
    printf("\tUniqueID: %d\n\n", _vector->array[i].uniqueID);
    puts("---------------------------------------------\n");
  }
}

void pause() {
  getchar();
  puts("\n\nPress enter to continue\n\n");
  getchar();
}
