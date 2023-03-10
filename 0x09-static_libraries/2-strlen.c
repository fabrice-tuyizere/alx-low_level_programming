#include "main.h"
/**
 * _strlen - function to print sting lenght
 *
 * @s: parameter to be passed
 * Return: return the value
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s++)
	{
		count++;
	}
	return (count);
}
