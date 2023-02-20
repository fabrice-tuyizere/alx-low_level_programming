#include <stdio.h>
/**
 * main - print the alphabetic letters
 * Return: always return 0
 */
int main(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
