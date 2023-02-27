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
		l++;
		end++;
	}
	for (i = 0; i <= l ; i++)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
