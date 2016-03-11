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
  FILE *fp;
  fp = fopen(argv[1], "r");
  if (fp == NULL) return 1;
  while (!feof(fp))
  {
    int c = fgetc(fp);
    if (c != EOF)
      printf("%c", (char) c);
  }
  fclose(fp);
  return 0;
}
