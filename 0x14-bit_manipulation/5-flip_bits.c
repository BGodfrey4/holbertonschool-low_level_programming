#include "main.h"

/**
* flip_bits - will count the number of bits that changes
* in order to get from one number to another number
* @n: is the first number
* @m: is the second number
*
* Return: is the number of bits that changes
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
{
	current = exclusive >> i;
	if (current & 1)
	count++;
}

	return (count);
}
