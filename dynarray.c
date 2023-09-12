
//----------------------------------------------------------------------------------------------
#include <stdlib.h>
#include "dynarray.h"

const int INIT_CAPACITY = 4;

void VECTOR_INIT(struct vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return;    
  } _vector->capacity = INIT_CAPACITY;
  // memory allocation
  _vector->array = (Student*) malloc(INIT_CAPACITY * sizeof(Student));
  if (_vector->array == NULL) {
    puts("\nError!! Memory allocation failed.\n");
    exit(1);
  }
  _vector->currSize = 0;

  // link the function pointers
  _vector->push_back = &push_back;
  _vector->pop_back = &pop_back;
  _vector->size = &size;
  _vector->resize = &resize;
  _vector->front = &front;
  _vector->get_info = &get_info;
}

void VECTOR_DEST(vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return;    
  }
  // deallocating the memory
  free(_vector->array);
  _vector->array = NULL;
}

void push_back (vector *_vector, const Student *_student) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return;
  }
  if(_vector->currSize >= _vector->capacity) {
    _vector->resize(_vector);
  }
  _vector->array[_vector->currSize] = *(_student);
  _vector->currSize++;
} 


void pop_back (vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return;
  }
  if(_vector->currSize < 1) {
    puts("\nError!! The size of the vector is already 0.\n");
    return;
  }
  // decrement the current size of vector by 1
  _vector->currSize--;
}

int size (const vector *_vector) {
  if(_vector == NULL) {
    puts("\nError!! The vector pointer is not allocated anywhere.\n");
    return -1;
  }
  return _vector->currSize; 
}

void resize (vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Cannot reallocate the pointer because it points at NULL.\n");
    return;
  }
  // doubling the vector capacity
  _vector->capacity *= 2;
  _vector->array = (Student*) 
    realloc(_vector->array, _vector->capacity * sizeof(Student));
  if(_vector->array == NULL) {
    puts("\nError!! Memory reallocation failed.\n");
    exit(1);
  }
}

Student* front (const vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return NULL;
  }
  if(_vector->currSize < 1) {
    puts("\nError: Invalid operation - vector is empty.\n");
    return NULL;
  }
  return &_vector->array[_vector->currSize-1];
}

const Student* get_info (const vector *_vector, int uniqueID) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return NULL;
  }
  if(_vector->currSize < 1) {
    puts("\nError: Invalid operation - vector is empty.\n");
    return NULL;
  }
  for(int i = 0; i < _vector->currSize; i++) {
    if(_vector->array[i].uniqueID == uniqueID) {
      return &_vector->array[i];
    }
  } 
  puts("\nError: Invalid uniqueID - no matching student found.\n");
  return NULL;
}
//----------------------------------------------------------------------------------------------