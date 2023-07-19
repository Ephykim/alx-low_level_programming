#include "function_pointers.h"

/**
  * int_index-searches for an integer.
  * @array: Pointer to an array
  * @size: Size of the array
  * @cmp: Function pointer
  *
  * Return: An integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
