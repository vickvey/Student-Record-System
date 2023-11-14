

//-----------------------------------------------------------------------
#ifndef DYNARRAY_H_
#define DYNARRAY_H_

#include "student.h"

// dynamic array data structure for vector of students
typedef struct vector vector; 

struct vector {
  Student *array;
  int currSize;
  int capacity;

  void (*push_back) (vector *, const Student *);
  void (*pop_back) (vector *);
  int (*size) (const vector *);
  void (*resize) (vector *);

  // returns a reference to last element of vector
  Student* (*front) (const vector *);

  // returns a const reference to student with given uniqueID
  const Student* (*get_info) (const vector *, int);
};

void VECTOR_INIT(vector *_vector);
void VECTOR_DEST(vector *_vector);

void push_back (vector *_vector, const Student *_student);
void pop_back (vector *_vector);
int size (const vector *_vector);
void resize (vector *_vector);
Student* front (const vector *_vector);
const Student* get_info (const vector *_vector, int uniqueID);

#endif
//-----------------------------------------------------------------------
