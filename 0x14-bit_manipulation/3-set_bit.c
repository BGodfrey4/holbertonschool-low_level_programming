#include "main.h"

/**
* set_bit - will set the bit at the index given to 1
* @n: is just the pointer to the number to change
* @index: is the index of the bit that sets to 1
*
* Return: 1 is success, -1 is failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
