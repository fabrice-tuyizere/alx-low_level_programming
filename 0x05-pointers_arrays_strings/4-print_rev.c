#include "main.h"
/**
 *print_rev - return reversed string
 *
 * @s: parameter
 */

void print_rev(char *s)
{
	int i, l;
	char *end;

	 l = 0;
	end = s;
	while (*s++)
	{
		++end;
		l++;
	}
	for (i = 0; i <= l - 1; i++)
	{
		end--;
		_putchar(*end);
	}
	_putchar('\n');
}
