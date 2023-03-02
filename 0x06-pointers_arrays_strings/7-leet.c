#include "main.h"
/**
 * *leet - function definition to perform conversion
 * @s: parameter string
 *
 * Return: return the output string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (s[i] == 'E' || s[i] == 'e')
			s[i] = '3';

		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';

		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
