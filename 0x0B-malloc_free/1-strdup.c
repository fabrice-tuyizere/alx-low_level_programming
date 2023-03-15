#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function definition to duplicate
 * @str: parameter string
 * Return: return the pointer to the new string;
 */
char *_strdup(char *str)
{
	int i, size = 0, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for ( ; str[size] != '\0'; size++)
		len++;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
	free(ptr);
}
