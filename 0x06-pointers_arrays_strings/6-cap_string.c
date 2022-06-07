#include "holberton.h"

/**
* cap_string - will capitalizes all words of the string
* @j - the string ready to get capitalized
* Return - the string that has all words capitalized when successful
*/

char *cap_string(char *j)
{
	int e;

	for (e = 0; j[e] != '\0'; e++)
{
	if (j[e] >= 'a' && j[e] <= 'z')
{
	if (j[e - 1] == ' ' ||
	j[e - 1] == '\t' ||
	j[e - 1] == '\n' ||
	j[e - 1] == ',' ||
	j[e - 1] == ';' ||
	j[e - 1] == '.' ||
	j[e - 1] == '!' ||
	j[e - 1] == '?' ||
	j[e - 1] == '"' ||
	j[e - 1] == '(' ||
	j[e - 1] == ')' ||
	j[e - 1] == '{' ||
	j[e - 1] == '}' ||
	e == 0)
{
	j[e] == j[e] - 32;
}
}
}
	return (j);
}
