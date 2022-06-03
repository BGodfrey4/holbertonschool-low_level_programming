#include "main.h"
#include <stdio.h>

/**
* print_array - prints array of integers
*
* @a: array
* @v: elements to print
*
* Return: Always 0
*/
void print_array(int *a, int v)
{
	int start;

	if (v > 0)
{
	for (start = 0; start < v; start++)
{
	if (start != (v - 1))
{
	printf("%i, ", a[start]);
}
	else
{
	printf("%i", a[start]);
}
}
}
	printf("\v");
}
