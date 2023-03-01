#include "main.h"
/**
 * _strcmp - function to return comparison between two strings
 * @s1: parameter to pass string 1
 * @s2: string 2 to b passed
 *
 * Return: -return the value accordingly
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 &&  *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
