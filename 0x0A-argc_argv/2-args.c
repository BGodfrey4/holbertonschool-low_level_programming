#include <stdio.h>
#include <stdlib.h>

/**
*main - will print the arguements of argv's
*@argc: is the array length.
*@argv: just the array.
*Return: 0.
*/

int main(int argc, char *argv[])
{
	(void)argc;
	while (*(argv))
{
	printf("%s\n", *(argv));
	argv++;
}

	exit(EXIT_SUCCESS);
}
