#include "main.h"
/**
 * *_strncpy - function definition of string copy
 * @dest: destnation string
 * @src: source string
 * @n: number remaining on source string
 *
 * Return: return the outuput
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (src[i++])
		l++;
	for (i = 0; src[i] && i < n ; i++)
		dest[i] = src[i];
	for (i = l; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
