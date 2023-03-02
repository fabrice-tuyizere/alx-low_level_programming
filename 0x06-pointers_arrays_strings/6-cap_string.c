#include "main.h"
/**
 * *cap_string - function definition
 * @s: parameter string to be passed
 *
 * Return: return output string
 */
char *cap_string(char *s)
{
	int i=0;

	while(s[i++])
	{
		if(i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = 'A' + s[i] - 'a';
		if ((s[i] == '\t' ||
			s[i] == '\n' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}' ||
			s[i] == ' ' ||
			s[i] == '.') && (s[i + 1] >='a' && s[i + 1] <= 'z'))
				s[i + 1] = 'A' + s[i + 1] - 'a';
	}
	return (s);
}
