#include "holberton.h"

/**
*reverse_array - will reverse the array.
*@a: array.
*@n: the array's length.
*/

void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;
	for (x = 0; x < n / 2; x++)
{
	tmp = a[x];
	a[x] = a[y];
	a[y] = tmp;
	y--;
}
}
