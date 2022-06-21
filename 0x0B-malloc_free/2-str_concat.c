# include "main.h"

/**
*str_concat - will concat 2 strings.
*@s1: is the first string.
*@s2: is the second string.
*Return: is the pointer to string.
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[i])
	i++;
	while (s2[j])
	j++;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	return (NULL);

	while (k < i)
{
	s[k] = s1[k];
	k++;
}

	while (k < i + j)
{
	s[k] = s2[k - i];
														k++;
}
	s[k] = '\0';
	return (s);
}
	heart
	+ 1
	raised_hands













