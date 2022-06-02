#include main.h

/**
* print_diagonal - will draw a diagonal line on the terminal
* @n: the number of times the character will be printed
* Return: is void
*/

void print_diagonal(int n)
{
	char i;
	char x;

	if (n > 0)
{
	for (x = 0; x < n; x++)
{
	for (i = 0; i < e; i++)
{
	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
