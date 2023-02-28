#include "main.h"
/**
 *  puts_half - prints the output
 *
 *  @str: parameter to be passed
 */
void puts_half(char *str)
{
	int n = 0;
	int i = 0, num;

	while (str[i++])
	{
		n++;
	}
	if ((n % 2) ==  0)
		num = n / 2;
	else
		num = (n + 1) /  2;
	for (i = num; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');         
}
