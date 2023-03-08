#include "main.h"
/**
 * factorial - function definition to return the factorial of given number
 * @n: parameter intege
 * Return: return the output
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
		return (-1);

}
