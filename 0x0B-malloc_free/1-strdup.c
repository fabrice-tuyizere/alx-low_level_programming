#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function definition to duplicate
 * @str: parameter string
 * Return: return the pointer to the new string;
 */
char *_strdup(char *str)
{
	int i, size = 1;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for ( ; str[size] != '\0'; size++)
		;
	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
	free(ptr);
}
