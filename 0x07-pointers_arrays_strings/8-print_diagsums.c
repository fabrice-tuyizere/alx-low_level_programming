#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - function definition to print 2d array
 * @a: parameter 2d array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0;
	int add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				add1 = add1 + a[k];
			if (i + j == size - 1)
				add2 = add2 + a[k];
			k++;
		}
	}
	printf("%d, %d\n", add1, add2);
}
