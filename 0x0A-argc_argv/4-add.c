#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry of program
 * @argc: argument count
 * @argv: arguments vector
 * Return: always return 0;
 */
int main(int argc, char *argv[])
{
	int result = 0, i, num = 0, flag = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
			flag = 1;
		else
			result = result + num;
	}
	if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", result);
	}
	return (0);
}
