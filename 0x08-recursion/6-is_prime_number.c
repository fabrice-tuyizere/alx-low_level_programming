#include "main.h"
/**
 * is_prime_number - function definition
 * @n: parameter number
 * Return: return the output
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);

}

