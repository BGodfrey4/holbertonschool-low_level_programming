#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - check code
 * @c: N/A
 * Return: #1 or 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
