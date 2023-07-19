#include "function_pointers.h"

/**
  * array_iterator-Iterates over an array
  * @array: Pointer to an array
  * @size: Size of the array
  * @action: Function pointer
  *
  * Return: Void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
