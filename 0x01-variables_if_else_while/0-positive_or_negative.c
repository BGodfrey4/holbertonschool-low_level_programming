#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - assigns random variable
 * @n: is a variable
 * Return: 0*
 */
int main(0)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);

return (0);
}
