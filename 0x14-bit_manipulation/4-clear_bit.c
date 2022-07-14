#include "main.h"

/**
* clear_bit - sets value of the given bit to 0
* @n: is the pointer to the number that changes
* @index: is the index of the bit that clears
*
* Return: 1 is success -1 is failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
