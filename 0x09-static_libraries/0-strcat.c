#include "main.h"
/**
 * *_strcat - function to concatnate
 * @dest: destination string
 * @src: source string
 *
 * Return: return concantinated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
