#include <stdio.h>
#include "main.h"

/**
 * print_aaray - prints n elements of an array
 * followed by a acomma and a space
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	print('\n');
}
