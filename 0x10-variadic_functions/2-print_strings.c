#include "variadic_functions.h"

/**
* print_strings - is the function prining strings followed by a new line
* @separator: is the string thats printed between the strings
* @n: is the number of strings passed to the function
* Return: is void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* will declare list variable for arguments */

	unsigned int j = 0; /* is the initialized counter variable */
	char *string; /* char pointer to strings in arg list */

	va_start(args, n); /* will begin access to variable list args
	* thats for function that begins after parameter
	* is just the last required parameter n.
	*/
	while (j < n)
{
	string = va_arg(args, char *); /* will initialize char pointer to first
	* is just the character array (string) found
	* in list of arguments
	*/
	if (string == NULL) /* will handle the condition of null string req. */
	{
	printf("(nil)");
}
	else /* if string isn't null, then print string to stdout */
{
	printf("%s", string);
}
	j++; /* continue moving to next argument in list */
	if (separator != NULL && j <= (n - 1)) /* telling function what
	* to do with separator.
	* count needs to be less
	* than 1 since separator
	* only prints between
	* strings.
	*/
{
	printf("%s", separator);
}
}
	printf("\n");
	va_end(args); /* lets the function know no more need to access arg list
	* it can release the memory it has been holding for it
	*/
}
