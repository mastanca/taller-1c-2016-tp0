/*
 * main.c

 *
 *  Created on: Mar 10, 2016
 *      Author: mastanca
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE_NOMBRE 20
#define PRIMER_ARGUMENTO 1

int main(int argc, char *argv[])
{
  char nombre[SIZE_NOMBRE];
  char *buffer;
  FILE *fp;
  strcpy(nombre, argv[PRIMER_ARGUMENTO]);
  fp = fopen(nombre, "r");
  if (fp == NULL) return 1;
  buffer = malloc(sizeof(int));  /* buffer innecesario */
  while (!feof(fp))
  {
    int c = fgetc(fp);
    if (c != EOF)
      printf("%c", (char) c);
  }
  fclose(fp);
  free(buffer);
  return 0;
}
