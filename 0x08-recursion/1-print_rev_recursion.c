#include "main.h"
/**
 * _print_rev_recursion - funtion definition to reverse string element
 * @s: paramater to be passed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
