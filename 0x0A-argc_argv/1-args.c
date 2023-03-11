#include <stdio.h>
#include "main.h"
/**
 * main - entry of program
 * @argc: argument counter
 * @argv: argument vector
 * Return: always return 0;
 */
int main(int argc, char *argv[])
{
	int i;

	(void)*argv;
	for (i = 0; i < argc - 1; i++)
		;
	printf("%d\n", i);
	return (0);
}
