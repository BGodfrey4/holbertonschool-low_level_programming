#include "main.h"

/**
*_memcpy - will copy n bytes from src to dest
*@dest: is the string to copy into it.
*@src: is the string to copy from.
*@n: is the number of bytes to copy.
*Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

	return (dest);
}
