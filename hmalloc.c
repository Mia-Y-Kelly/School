#include "hmalloc.h"
#include <stdlib.h>

#include <stdio.h>
/*You may include any other relevant headers here.*/
#include <string.h>

/*Add additional data structures and globals here as needed.*/
void *free_list = NULL;

/* traverse
 * Start at the free list head, visit and print the length of each
 * area in the free pool. Each entry should be printed on a new line.
 */
void traverse(){
   /* Printing format:
	 * "Index: %d, Address: %08x, Length: %d\n"
	 *    -Index is the position in the free list for the current entry. 
	 *     0 for the head and so on
	 *    -Address is the pointer to the beginning of the area.
	 *    -Length is the length in bytes of the free area.
	 */

}

/* hmalloc
 * Allocation implementation.
 *    -will not allocate an initial pool from the system and will not 
 *     maintain a bin structure.
 *    -permitted to extend the program break by as many as user 
 *     requested bytes (plus length information).
 *    -keeps a single free list which will be a linked list of 
 *     previously allocated and freed memory areas.
 *    -traverses the free list to see if there is a previously freed
 *     memory area that is at least as big as bytes_to_allocate. If
 *     there is one, it is removed from the free list and returned 
 *     to the user.
 */
void *hmalloc(int bytes_to_allocate){
	
	// float current_loc = sbrk(0);
	unsigned int loc, new_loc;

	int* ptr;
	// int diff;

	// loc = sbrk(0);
	// printf("Current location is %u\n", loc);
	// loc = sbrk(bytes_to_allocate);
	// new_loc = sbrk(0);
	// diff = new_loc-loc;
	// printf("New location in memory is %u\n", new_loc);
	// printf("Increased pointer by %d\n", diff);

	// ptr = (int *) new_loc;
	return sbrk(bytes_to_allocate); //placeholder to be replaced by proper return value
}

/* hcalloc
 * Performs the same function as hmalloc but also clears the allocated 
 * area by setting all bytes to 0.
 */
void *hcalloc(int bytes_to_allocate){
	
	return NULL; //placeholder to be replaced by proper return value
}

/* hfree
 * Responsible for returning the area (pointed to by ptr) to the free
 * pool.
 *    -simply appends the returned area to the beginning of the single
 *     free list.
 */
void hfree(void *ptr){
	
}

/* For the bonus credit implement hrealloc. You will need to add a prototype
 * to hmalloc.h for your function.*/

/*You may add additional functions as needed.*/
