#include "main.h"
#include <stdlib.h>
/**
 * str_concat - return concantinated string
 * @s1: the parameter tobe concantinated with other
 * @s2: parameter to add to other
 * Return: one concantnated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, le = 0, count = 0, j;
	char *ptr;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s2[i] != '\0'; i++)
		le++;
	for (i = 0; s1[i] != '\0'; i++)
		count++;
	len = le + count;
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
		ptr[i] = s1[i];
	for (j = 0; j < le; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
