#include "main.h"
/**
 * _strcpy - function to print copy of another pointer
 * 
 * @src: source parameter
 * @dest: destination parameter 
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while(src[i])
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
