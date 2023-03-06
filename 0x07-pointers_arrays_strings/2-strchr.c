#include "main.h"
/**
 * *_strchr - function to search appearance of character in the given strings
 * @s:  string parameter
 * @c: character element to search
 * Return: return the address memory of first character string
 */
char *_strchr(char *s, char c)
{
	char *v;

	while (*s++)
	{
		if (*s == c)
		{
			v = s;
			break;
		}
	}
	return (v);
}
