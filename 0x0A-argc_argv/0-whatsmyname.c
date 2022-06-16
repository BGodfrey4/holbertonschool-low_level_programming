#include <stdio.h>
#include <stdlib.h>

/**
*main -will print the name of the program
*@argc:it's the array length.
*@argv: just the array.
*Return: 0.
*/


int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	exit(EXIT_SUCCESS);
}
