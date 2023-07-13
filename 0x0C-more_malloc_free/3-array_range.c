#include <stdlib.h>
#include "main.h"

/**
  * array_range-creates an array of integers.
  * @min:Minimum Elements
  * @max:Maximum Elements
  *
  * Return: pointer to new array
  */
int *array_range(int min, int max)
{
	int len, i;
	int *array;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	array = calloc(len, sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = min++;
		if (min == max)
			break;
	}
	return (array);
}
