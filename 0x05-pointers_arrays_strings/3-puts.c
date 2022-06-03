#include "main.h"

/**
* _puts - prints a string to stdout
*
* @str: the string
*
* Return: string statement
*/
void _puts(char *str)
{
	int v = 0;

	while (str[v] != '\n' && str[v] != '\0')
{
	_putchar(str[v]);
	v++;
}
	_putchar('\n');
}
