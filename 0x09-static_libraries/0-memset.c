#include "main.h"

/**
  * _memset-Set a block of memory to a value
  * @s: memory location
  * @b: The value
  * @n: Size
  *
  * Return: character pointer
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
