/**
 Codigo del linsting 1.1 de "Advanced Linux Programming"
 Integrantes:
 @Miryam Godoy
 @Alex Gomez
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reciprocal.hpp"

int main(int argc, char **argv){
  int i;
  int a;
  i = atoi(argv[1]);
  printf("the reciprocal of %d is %g\n", i,reciprocal(i));
  return 0;
  
}
