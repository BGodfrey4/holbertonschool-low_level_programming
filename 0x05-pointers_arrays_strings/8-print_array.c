#include "main.h"
#include <stdio.h>

/**
* print_array - will print the array.
* @a: the array to make it print.
* @n: array's length
*/

void print_array(int *a, int n)
{
int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
