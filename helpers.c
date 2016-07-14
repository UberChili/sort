/**
 *
 * helpers.c
 *
 * Helper functions for sort.c
 */

#include <cs50.h>

#include "helpers.h"

void heap(int values[], int n)
{
	// TODO
}

void insertion(int values[], int n)
{
	int j;

	for (int i = 2; i < n; i++)
	{
		int key = values[i];

		//insert values[i] into the sorted sequence values[1.. j - 1].
		j = i - 1;

		while ( j > 0 && values[j] > key)
		{
			values[j + 1] = values[j];
			j = j - 1;
		}

		values[j + 1] = key;
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
