#include "main.h"
/**
 * _strlen_recursion - entry functio definition
 * @s: parameter to be passed
 * Return: return the output
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
