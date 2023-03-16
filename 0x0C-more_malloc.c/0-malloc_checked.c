#include "main.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (void *)malloc(sizeof(*ptr) * b);
	if(ptr == NULL)
		exit (98);
	free(ptr);
	return (ptr);
}

