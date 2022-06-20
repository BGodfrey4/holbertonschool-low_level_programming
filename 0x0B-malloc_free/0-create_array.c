#include "main.h"
/**
* create_array - s is the entry point
*@size: is the size of the array
*@c: is the character
* Return: is the pointer to the array or its null if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
	return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
	{
		for (i = 0; i < size; i++)
		array[i] = c;
	}
	}
	return (array);
}
