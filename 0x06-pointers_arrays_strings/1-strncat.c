#include "main.h"
/**
 * *_strncat - function to return the concanated string
 *@dest: destination string
 *@n: parameter to termine the size of source
 * @dest: source string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;
	for (i = 0; dest[i] && i < n; i++)
		dest[l++] = src[i];
	return (dest);
}
