
//----------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "dynarray.h"

static const int INIT_CAPACITY = 4;

static void VECTOR_SETUP(vector **vect_ref) {
  (*vect_ref)->capacity = INIT_CAPACITY;
  // memory allocation
  (*vect_ref)->array = (Student*) calloc(INIT_CAPACITY, sizeof(Student));
  if ((*vect_ref)->array == NULL) {
    puts("\nError!! Memory allocation failed.\n");
    exit(1);
  }
  (*vect_ref)->currSize = 0;
}

void VECTOR_INIT(vector **vect_ref) {
  if(vect_ref == NULL) {
    puts("\nError: Invalid operation - pointer to pointer to vector is NULL.\n");
    return;    
  }
  if(*vect_ref != NULL) {
    puts("\nError: vector already initialised!!\n");
  }
  *vect_ref = (vector *)calloc(1, sizeof(vector));
  if(*vect_ref == NULL) {
    puts("\nError: vector memory allocation failed.\n");
    exit(1);
  }
  VECTOR_SETUP(vect_ref);

  /* link the function pointers
  (*vect_ref)->push_back = &push_back;
  (*vect_ref)->pop_back = &pop_back;
  (*vect_ref)->size = &size;
  (*vect_ref)->resize = &resize;
  (*vect_ref)->front = &front;
  (*vect_ref)->get_info = &get_info;
  */
}

void VECTOR_CLEAR(vector **vect_ref) {
  // code here

}

void VECTOR_DEST(vector **vect_ref) {
  if(vect_ref == NULL) {
    puts("\nError: Invalid operation - pointer to pointer to vector is NULL.\n");
    return;    
  }
  // clearing the vector
  VECTOR_CLEAR(vect_ref);

  // deallocating the memory
  free((*vect_ref));
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

void resize(vector *_vector) {
  if (_vector == NULL) {
    puts("\nError: Cannot reallocate the pointer because it points at NULL.\n");
    return;
  }

  // Check for capacity overflow
  if (_vector->capacity > (int)SIZE_MAX / 2) {
    // Handle overflow with a meaningful message
    puts("\nError: Capacity overflow during resize. Unable to double the capacity.\n");
    exit(1);
  }

  // Double the vector capacity
  _vector->capacity *= 2;

  // Resize the array
  _vector->array = (Student*)realloc(_vector->array, _vector->capacity * sizeof(Student));

  // Check for memory allocation failure
  if (_vector->array == NULL) {
    puts("\nError: Memory reallocation failed.\n");
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
