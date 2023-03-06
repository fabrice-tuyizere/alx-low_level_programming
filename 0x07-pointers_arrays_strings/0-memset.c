#include "main.h"
/**
 * *_memset - function to assign values to the given strings
 * @s: destination parameter
 * @b: value to be assigned
 * @n:lenth of string
 * Return: return the address
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *dst = s;
       
	while (n > 0) 
	{
		*dst = b;
		dst++;
		n--;
	}
	return (s);
}
