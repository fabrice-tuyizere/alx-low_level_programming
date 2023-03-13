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
	int count = 0;
	int amount = 0, i = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[i]);
	while (amount > 0)
	{
		count++;
		if (amount - 25 >= 0)
		{
			amount -= 25;
			continue;
		}
		if (amount - 10 >= 0)
		{
			amount -= 10;
			continue;
		}
		if (amount - 5 >= 0)
		{
			amount -= 5;
			continue;
		}
		if (amount - 2 >= 0)
		{
			amount -= 2;
			continue;
		}
		amount--;
	}
	printf("%d\n", count);
	return (0);
}
