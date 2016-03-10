/*
 * main.c

 *
 *  Created on: Mar 10, 2016
 *      Author: mastanca
 */

//#include <stdio.h>
//
//int main (int argc, const char * argv[]) {
//
//	struct Books {
//		int id;
//		char authorInitial;
//	};
//
//	int sizeInt = sizeof( int );
//	int sizeChar = sizeof( char );
//	struct Books book1;
//	book1.id = 25;
//	book1.authorInitial = 'A';
//
//    printf("%s", "Id of the book: ");
//    printf("%d\n", book1.id);
//
//    printf("%s", "Author initial: ");
//    printf("%c\n", book1.authorInitial);
//
//    printf("%s", "Sum of the sizeofs: ");
//    int sumOfSizeOfs = sizeof( book1.id ) + sizeof( book1.authorInitial );
//    printf("%d\n", sumOfSizeOfs);
//
//    printf("%s", "Sum of the struct: ");
//    printf("%d\n", sizeof( book1 ) );
//
//
//    printf("%d\n", sizeInt);
//    printf("%d\n", sizeChar);
//    return 0;
//}

#include <stdio.h>
#include <string.h>
int main( int argc, char *argv[] )
{
  char nombre[20];
  char *buffer;
  FILE *fp;
  ztrcpy( nombre, argv[1] );
  fp = fopen( nombre, "r" );
  if( fp == NULL ) return 2;
  buffer = malloc( sizeof(int) );  /* buffer innecesario */
  while( !feof(fp) )
  {
    int c = fgetc(fp);
    if( c != EOF )
      printf( "%c", (char) c );
  }
  return 0;
}
