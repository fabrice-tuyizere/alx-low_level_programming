#include "main.h"
/**
 * _atoi - function to return entegers
 *
 * @s: parameters of strings
 * Return: return output accordingly
 */
int _atoi(char *s)
{
	int ss = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			ss *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;
	} while (*s++);
return (n * ss);
}

