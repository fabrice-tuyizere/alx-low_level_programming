#include "main.h"
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int **array;

	if (width <= 0 || height <=0)
		return (NULL);
	array  = malloc(width * height * sizeof(int));
	if (array == NULL)
		return (NULL);
	return (array);
}
