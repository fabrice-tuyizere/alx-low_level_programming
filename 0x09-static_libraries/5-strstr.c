#include "main.h"
/**
 * *_strstr - function to search appearance of character in the given strings
 * @haystack:  string parameter
 * @needle: substring element to search
 * Return: return the address of first character of match
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (k = 0; needle[k] != '\0'; k++)
		;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == k)
		{
			return (haystack + i);
		}
	}
	return (0);
}
