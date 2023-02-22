#include "main.h"
/**
 * _isalpha - it will excute program
 * @c: parameter to be passed
 *
 * Return: return 1 if parameter passed is alphabetic character otherwise zero
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
