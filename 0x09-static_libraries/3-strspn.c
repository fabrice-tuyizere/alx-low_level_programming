#include "main.h"
/**
 * *_strspn - function to search appearance of character in the given strings
 * @s:  string parameter
 * @accept: character element to search
 * Return: return the lenth of sub
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0, bo;

	for (j = 0; s[j] != '\0'; j++)
	{	bo = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				bo = 1;
				break;
			}
		}
		if (bo == 0)
			break;
		count++;
	}

	return (count);
}
