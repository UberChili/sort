/**
 * sort.c
 *
 * Implementing some sorting algorithms in C
 *
 * by Juan Andrés Núñez López
 *
 * Universidad Michoacana de San Nicolás de Hidalgo
 *
 */

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

// maximum size of array
const int MAX = 65536;

int main(void)
{
	// fill array
	int size;
	int haystack[MAX];

	for (size = 0; size < MAX; size++)
	{
		printf("\narray[%i] = ", size);
		int straw = GetInt();

		if (straw == INT_MAX)
			break;

		haystack[size] = straw;
	}
	printf ("\n\n");
	
	// Making some space for easy reading
	printf ("Unsorted array: \n\n");

	for (int i = 0; i < size; i++)
	{
		printf ("array[%i] = %i", i, haystack[i]);
		printf ("\n");
	}
	printf("\n");

	// Prompt user for sorting algorithm to use
	printf ("Sorting algorithms available:\n");
	printf ("1. HeapSort\n");
	printf ("2. Insertion Sort\n");
	printf ("3. Quick Sort\n");
	printf ("4. Merge Sort\n");
	printf ("\n");
	printf ("Enter an algorithm to use: ");
	int selection = GetInt();

	switch (selection)
	{
		case 1 :
			printf ("\nSorting... \n");
			printf ("\nFinished sorting!\n");
			heap(haystack, size);
			break;

		case 2 :
			printf ("\nSorting... \n");
			printf ("Finished sorting!\n");
			insertion(haystack, size);
			break;

		case 3 :
			printf ("\nSorting... \n");
			printf ("Finished sorting!\n");
			quick(haystack, size);
			break;

		case 4 : 
			printf ("\nSorting... \n");
			printf ("Finished sorting!\n");
			merge(haystack, size);
			break;
	}

}
