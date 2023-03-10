#include "main.h"
/**
 * *_memcpy - function to copy values to the given strings
 * @dest: destination string parameter
 * @src: value to be assigned
 * @n:lenth of string
 * Return: return the address of copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
