#include "main.h"
/**
* _islower - produce an out put 
* @c: passed parameter
*
* Return: return one if success other wise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
