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
		printf ("array[%i] = %i",i, haystack[i]);
		printf ("\n");
	}
	printf("\n");

	// Prompt user for sorting algorithm to use
	printf ("Select a sorting algorithm:\n");
	int selection = GetInt();

	// Making some more space
	printf ("\nSorting... \n");
}
