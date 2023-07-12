#include "main.h"
#include <stdlib.h>

/**
  * create_array-Creates a dyanmic array of characters
  * @size: size of the array
  * @c: character to print
  *
  * Return: Character pointer
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
	if (size == 0 || ptr == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
