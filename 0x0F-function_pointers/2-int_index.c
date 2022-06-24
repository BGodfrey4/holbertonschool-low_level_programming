#include "function_pointers.h"

/**
* int_index - will search for positions of
* the element in the array that meets the condition of the cmp function.
* @array: is the array address.
* @size: just the array size.
* @cmp: is the address of function that is called.
* Return: is just the integer.
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size > 0)
{
	for (; i < size; i++)
{
	if (cmp(array[i]) != 0)
	return (i);
}
	return (-1);
}
	return (-1);
}
