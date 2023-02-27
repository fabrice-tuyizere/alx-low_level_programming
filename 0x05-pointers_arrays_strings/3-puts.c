#include "main.h"
/**
 * _puts - return print value
 *
 * @str: parameter to be passed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');

}
