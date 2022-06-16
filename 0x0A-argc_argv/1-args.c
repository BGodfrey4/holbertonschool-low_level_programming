#include <stdio.h>
#include <stdlib.h>

/**
*main - will print the number of arguments.
*@argc:will print the array length.
*@argv: is the array.
*Return: 0.
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
