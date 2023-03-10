#include "main.h"
/**
 * _strcpy - function to print copy of another pointer
 * @src: source parameter
 * @dest: destination parameter
 *
 * Return: return the new string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = 0;
	return (dest);
}
