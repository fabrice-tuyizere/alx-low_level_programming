#include "main.h"
/**
 * _puts_recursion - entry function
 * @s: paramater to be passed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
