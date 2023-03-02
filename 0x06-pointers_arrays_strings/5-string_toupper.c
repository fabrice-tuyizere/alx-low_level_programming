#include "main.h"
/**
 * *string_toupper - string to change ro upper case
 * @n:entered string to convert
 * Return: converted string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i++])
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = 'A' + n[i] - 'a';
	}
	return (n);
}
