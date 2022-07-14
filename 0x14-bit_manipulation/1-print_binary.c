#include "main.h"

/**
* print_binary - will print the binary equal to the decimal number
* @n: is just the number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
{
	current = n >> i;

	if (current & 1)
{
	putchar('1');
	count++;
}
	else if (count)
	_putchar('0');
}
	if (!count)
	_putchar('0');
}
