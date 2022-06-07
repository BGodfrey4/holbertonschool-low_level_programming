#include "holberton.h"

/**
* leet - will capitalize all words of a string
*
* @s: is thestring variable
*
* Return: will encode a long string into 1337
*/
char *leet(char *s)
{
	int x, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
{
	for (j = 0; j < 10; j++)
{
	if (s[x] == a[j])
{
	s[x] = b[j];
}
}
}

	return (s);
}
