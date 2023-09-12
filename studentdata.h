
//------------------------------------------------------------------
#ifndef STUDENTDATA_H_
#define STUDENTDATA_H_

#include "dynarray.h"
#include <stdio.h>

typedef struct dataIO dataIO;

void save (dataIO *_dataIO, vector *_vector);
void load (dataIO *_dataIO, vector *_vector);

void getting_dataIO_ready(dataIO *_dataIO, const char *_filename);

struct dataIO {
  char filename[50];
  void (*save) (dataIO *, vector *);
  void (*load) (dataIO *, vector *);
};

#endif
//------------------------------------------------------------------