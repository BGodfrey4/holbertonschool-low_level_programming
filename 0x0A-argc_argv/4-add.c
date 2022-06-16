#include <stdio.h>
#include <stdlib.h>

/**
*main - will print the numbers of argv's that are added up
*@argc: is the array length.
*@argv: just the array.
*Return: 0.
*/

int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc > 1)
{
	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] ; j++)
{
	if (argv[i][j] < '0' || argv[i][j] > '9')
{
	printf("Error\n");
	return (1);
}
}
	sum += atoi(argv[i]);
}
}
	printf("%d\n", sum);
	return (0);
}
