#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
* Return: void
*/

void more_numbers(void)
{
	int temp = 0;
	int i;

	for (temp = 1; temp <= 10; temp++)
{
	for (i = 0; i <= 14; i++)
{
	if (i > 9)
{
	_putchar((i / 10) + '0');
}
	_putchar((i % 10) + '0');
}
}
}
