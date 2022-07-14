#include "main.h"

/**
* print_binary - will print the binary equal to the decimal number
* @n: is just the number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, count = 0;

	while ((n >> count) > 1)
		count++;
	mask <<= count;
	while (mask > 0)
{
	if (n & mask)
	putchar('1');
	else
	putchar('0');
	mask >>= 1;
}
}
