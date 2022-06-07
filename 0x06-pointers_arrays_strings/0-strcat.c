#include "holberton.h"

/**
*_strcat - will concatenate the two strings.
*@dest: 1st string.
*@src: 2nd string.
*Return: string.
*/

char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	x++;

	while (src[y] != '\0')
{
	dest[x] = src[y];
	x++;
	y++;
}

	dest[x] = '\0';

	return (dest);
}
