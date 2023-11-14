
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "studentdata.h" 

void getting_dataIO_ready(dataIO *_dataIO, const char *_filename) {
  strcpy(_dataIO->filename, _filename);

  // linking the function pointers
  _dataIO->save = &save;
  _dataIO->load = &load;
}

void save (dataIO *_dataIO, vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return;    
  }

  // now we have to save the vector in the file
  FILE *wfile = fopen(_dataIO->filename, "wb");
  if (wfile == NULL) {
    perror("Error opening file");
    return;
  }
  // Write the number of students as the first value
  fwrite(&_vector->currSize, sizeof(int), 1, wfile);

  // saving the data
  fwrite(_vector->array, sizeof(Student), _vector->currSize, wfile);
  fclose(wfile);
}


void load (dataIO *_dataIO, vector *_vector) {
  if(_vector == NULL) {
    puts("\nError: Invalid operation - vector pointer is NULL.\n");
    return;    
  }
  FILE *rfile = fopen(_dataIO->filename, "rb");
  if (rfile == NULL) {
    perror("Error opening file");
    return;
  }

  // Read the number of students
  fread(&_vector->currSize, sizeof(int), 1, rfile);

  // freeing memory for vector array
  if(_vector->array != NULL) {
    free(_vector->array);
  } 
  _vector->array = (Student*) malloc(_vector->currSize * sizeof(Student));
  if (_vector->array == NULL) {
    puts("\nError!! Memory allocation failed.\n");
    exit(1);
  }

  // Read the student data
  fread(_vector->array, sizeof(Student), _vector->currSize, rfile);
  fclose(rfile);
}
