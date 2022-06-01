#include "main.h"

/**
* print_most_numbers - prints number from - to 9 w/ new line
* Return: is void
*/

void print_most_numbers(void)
{
	int i;


	for (i = 0; i < 10; i++)
{
	if (i != 2 && i != 4)
{
	_putchar(i + '0');
}
}

	_putchar('\n');
}

