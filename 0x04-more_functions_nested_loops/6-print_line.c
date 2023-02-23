#include "main.h"
/**
 * print_line - generate out put
 * @n: parameter
 *
 * Return: return output accordingly
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++ )
			_putchar('_');
	}
	_putchar('\n');
}
