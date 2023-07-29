#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * _realloc-Reallocates new memory
  * @ptr: Pointer
  * @old_size: Memory's old size
  * @new_size: Memory's new size
  *
  * Return: Void pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	{
		return (NULL);
	}
	else
	{
		n_ptr = calloc(1, new_size);
		if (n_ptr == NULL)
			return (NULL);
		if (old_size < new_size)
			memcpy(n_ptr, ptr, old_size);
		else
			memcpy(n_ptr, ptr, new_size);
		free(ptr);
	}
	return (n_ptr);
}
