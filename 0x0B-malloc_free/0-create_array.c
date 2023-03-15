#include "main.h"
#include <stdlib.h>
/**
 * create_array - function definition to return pointer to point to the array
 * @size: array size
 * @c: parameter string
 * Return: return pointer to the base address of an array other wise zero
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
