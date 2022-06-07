#include "holberton.h"

/**
*string_toupper - will turn all lowercase letters of a string to uppercase.
*@s: string to modify.
*
*Return: s modified.
*/

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
{
	if (s[x] > 96 && s[x] < 123)
{
	s[x] -= 32;
}
	x++;
}

	return (s);
}
