#include "main.h"

/**
  * _memcpy-Copies block of memory to another block
  * @dest: Destination string
  * @src: Source string
  * @n: Size
  *
  * Return: Character pointer
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
