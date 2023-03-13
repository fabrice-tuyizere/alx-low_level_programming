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
	int result = 0, i, num = 0;

	if (argc == 1)
	{
		printf("%d", 0);
		printf("\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{	printf("Error\n");
			return (1);
		}
		else
			result = result + num;
	}
	printf("%d", result);
		printf("\n");
	}
	return (0);
}
