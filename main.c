#include "hmalloc.h"
/*You may include any other relevant headers here.*/
#include <stdio.h>
#include <stdlib.h>

/*	main()
 *	Use this function to develop tests for hmalloc. You should not 
 *	implement any of the hmalloc functionality here. That should be
 *	done in hmalloc.c
 *	This file will not be graded. When grading I will replace main 
 *	with my own implementation for testing.*/
int main(int argc, char *argv[]){
	// some calls to hmalloc
	// int counter = 0;
	// do
	// {


		int num;
		int* ptr;
		int* loc = (int*)sbrk(0);
		printf("Current memory location: %p\n", loc);
		printf("Enter a number: ");
		scanf("%d", &num);
		ptr = (int*)hmalloc(num * sizeof(int));
	
		printf("Pointer to %p\n",ptr);

	// 	counter = counter + 1;
	// } while (counter < 5);


	// some calls to hfree
	
	return 1;
}
