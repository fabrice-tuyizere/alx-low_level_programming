#include "main.h"
/**
 * is_palindrome - function defninition
 * @: parameter to be passed 
 * Return: return the result
 */
int is_palindrome(char *s)
{
	int i = 0; len;
	if(*s)
		len=1+is_palindrome(s+1);
	if(*(s+i) != *(s + len-1))
		return(0);
	if(i>=len)
		return(1);
	i++;
	len--;
return(is_palindrome(s))
}
