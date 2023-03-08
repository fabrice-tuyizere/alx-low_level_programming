#include "main.h"
/**
* _pow_recursion - function definition
* @x: base parameter
* @y: exponent parameter
* Return: return output power of number
*/
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		else
			return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
