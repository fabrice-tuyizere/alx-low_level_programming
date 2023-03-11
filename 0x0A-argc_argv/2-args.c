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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
