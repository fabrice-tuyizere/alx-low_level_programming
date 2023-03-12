#include <stdio.h>
#include "main.h"
/**
 * myAtoi - function definition
 * @str: parameter string
 * Return: always integer value;
 */

int myAtoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';
	return (sign * res);
}
/**
 * main - entry of program
 * @argc: argument counter
 * @argv: argument vector
 * Return: always return 0;
 */

int main(int argc, char *argv[])
{
	int i = 1, num = 1;

	if (argc != 3)
		printf("Error");
	else
	{
	for ( ; i < argc; i++)
	{
		num = num * myAtoi(argv[i]);
	}
	printf("%d\n", num);
	}
	return (0);
}
