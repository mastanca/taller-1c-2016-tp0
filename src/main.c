/*
 * main.c

 *
 *  Created on: Mar 10, 2016
 *      Author: mastanca
 */

#include <stdio.h>
#include <string.h>
// #include <stdlib.h>
#define LARGO_FILE 20
#define POS_NOMBRE_ARCHIVO 1
#define ARCHIVO_NO_ENCONTRADO 1
#define SALIDA_NORMAL 0
int main(int argc, char *argv[])
{
 FILE *fp = stdin;
 if (argc > POS_NOMBRE_ARCHIVO)
 {
   fp = fopen(argv[POS_NOMBRE_ARCHIVO], "r");
   if ( fp == NULL ) return ARCHIVO_NO_ENCONTRADO;
 }
 while ( !feof(fp) )
 {
   int c = fgetc(fp);
   if ( c != EOF )
     printf("%c", (char) c);
 }
 if (argc > POS_NOMBRE_ARCHIVO)
   fclose(fp);
 return SALIDA_NORMAL;
}
