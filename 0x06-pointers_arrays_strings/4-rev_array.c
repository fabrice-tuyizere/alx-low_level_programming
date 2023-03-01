#include "main.h"
/**
 * reverse_array - reversing function
 * @:a array to e passed
 * @n: number of array element
 */
void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

