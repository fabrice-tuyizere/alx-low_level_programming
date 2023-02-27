#include "main.h"
/**
 * swap_int - function that will swap two numbers
 *
 * @a: first number to be passed
 * @b: second number to be passed
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
