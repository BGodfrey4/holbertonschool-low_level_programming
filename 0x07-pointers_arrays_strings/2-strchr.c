#include "main.h"

/**
*_strchr - will find the first occurence of the char.
*@c: will be the char to be found.
*@s: is the string to search in.
*Return: is the pointer to the first occurence of char c in s or NULL.
*/

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
{
	if (s[x] == c)
	break;
	x++;
}
	if (s[x] == c)
	return (s + x);
	return (0);
}
