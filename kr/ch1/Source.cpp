/*
============================================================================
Name        : Source.cpp
Author      : Julian
Version     :
Copyright   : Your copyright notice
Description : Hello World in C, Ansi-style
============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 0;
	int *p;
	//
	//	Tip: Let the compiler check errors:
	//
	static union
	{
		char error_int8[sizeof(signed char) == 1];
		char error_uint8[sizeof(unsigned char) == 1];
	};

	puts("!!!Hello World!!!\n");
	p = &i;
	printf("Initial Value *p = %d\n", *p);
	printf("test *p +1: %d\n", *p + 1);
	printf("test *p +=1: %d\n", *p += 1);
	printf("Final Value i = %d\n", i);


	return EXIT_SUCCESS;
}