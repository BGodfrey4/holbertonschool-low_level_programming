#include "main.h"

/**
* _strcpy - copies string point to by src
* @src: string being copied
* @temp: return value
* Return: the pointer to dest
*/

char *_strcpy(char *temp, char *src)
{
	int j = 0;

	while (src[j])
{
	*(temp + j) = *(src + j);
	j++;
}
	temp[j] = '\0';
	return (temp);
}
