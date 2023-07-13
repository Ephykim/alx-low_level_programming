#include <stdlib.h>
#include "main.h"
/**
  * _calloc-Allocates memory for an array
  * @nmemb: Members of the array
  * @size: Size of array
  *
  * Return: void pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
