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
	int flag = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; ++i)
	{
		if (!(str[i] - '0' >= '0' && str[i] - '0' <= '9'))
		{
			flag = 1;
			break;
		}
		res = res * 10 + str[i] - '0';
	}
	if (flag == 1)
		return (0);
	else
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
	int result = 0;
	int num, i, flag = 0;

	if (argc == 0)
		printf("%d", result);
	else
	{
	for (i = 1; i < argc; i++)
	{
		num = myAtoi(argv[i]);
		if (num == 0)
		{
		flag = 1;
		break;
		}
		else
		{
			result = result + num;
		}
		num = 0;
	}
	if (flag == 0)
		printf("%d", result);
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	return (0);
}
