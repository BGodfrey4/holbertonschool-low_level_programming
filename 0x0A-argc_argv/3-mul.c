#include <stdio.h>
#include <stdlib.h>

/**
*main - will print the 2 numbers that are multiplied
*@argc:is the array length.
*@argv: just the array.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
