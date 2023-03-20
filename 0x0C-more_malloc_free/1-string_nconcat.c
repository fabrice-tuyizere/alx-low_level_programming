#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function definition
 * @s1: parameter string 1
 * @s2: parameter string 2
 * @n: size tobe passed
 * Return: return void pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = n;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	ptr = malloc(sizeof(char) * (1 + len));
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
	{
		ptr[len++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		ptr[len++] = s2[i];
	}
	ptr[len] = '\0';
	return (ptr);
	return (0);
}

