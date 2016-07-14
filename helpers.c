/**
 *
 * helpers.c
 *
 * Helper functions for sort.c
 */

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

void heap(int values[], int n)
{
	// TODO
}

void insertion(int values[], int n)
{
	for (int j = 1; j < n; j++)
	{
		int key = values[j];

		//insert values[j] into the sorted sequence values[1.. j - 1].
		int i = j - 1;

		while ( i > 0 && values[i] > key)
		{
			values[i + 1] = values[i];
			i = i - 1;
		}

		values[i + 1] = key;
	}
	
	// print the array
	for (int i = 0; i < n; i++)
	{
		printf("array[%d] = [%d]\n", i, values[i]);
	}
}

void quick(int values[], int n)
{
	// TODO
}

void merge(int values[], int n)
{
	// TODO
}
