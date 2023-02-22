#include "main.h"
/**
 * print_sign - execute the output
 * @n: a parameter to pass
 *
 * Return: return signs and number acording to the value of n
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
