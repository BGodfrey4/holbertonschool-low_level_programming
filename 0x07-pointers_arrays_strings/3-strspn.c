#include "main.h"

/**
*_strspn - will get the length of a prefix substring.
*@s: is the string that will be searched in.
*@accept: is the substring.
*Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y = 0, n = 0, pn;
	int checker = 1;

	while (s[x] != '\0' && checker)
{
	y = 0;
	pn = n;
	while (accept[y] != '\0')
{
	if (s[x] == accept[y])
{
	n++;
	break;
}
	else
	y++;
}

	if (pn == n)
	checker = 0;

	x++;
}

	return (n);
}
