#include "main.h"
/**
 * *_strpbrk - function to search appearance of character in the given strings
 * @s:  string parameter
 * @accept: character element to search
 * Return: return the address of first character of match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
