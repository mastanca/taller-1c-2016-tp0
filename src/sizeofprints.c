/*
 * sizeofprints.c
 *
 *  Created on: Mar 10, 2016
 *      Author: mastanca
 */

#include <stdio.h>

int main (int argc, const char * argv[]) {

	struct Books {
		int id;
		char authorInitial;
	};

	int sizeInt = sizeof(int);
	int sizeChar = sizeof(char);
	struct Books book1;
	book1.id = 25;
	book1.authorInitial = 'A';

  printf("%s", "Sum of the sizeofs: ");
  int sumOfSizeOfs = sizeof(book1.id) + sizeof(book1.authorInitial);
  printf("%d\n", sumOfSizeOfs);

  printf("%s", "Sum of the struct: ");
  printf("%d\n", sizeof( book1 ) );

  return 0;
}
