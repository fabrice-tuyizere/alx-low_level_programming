#include "main.h"
/**
 *  puts_half - prints the output
 *
 *  @str: parameter to be passed
 */
void puts_half(char *str)
{
	int n = 0;
	int i,num;

	while (str++)
	{
	n++;
	}
	num=(n-1)/2;
	if(num % 2 != 0)
	{
		for (i=0;i<=num;i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i=num;i<=n;i++)
		{
			_putchar(str[i]);
		}
	}
}
