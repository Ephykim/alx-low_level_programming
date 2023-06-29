#include "main.h"

/**
  * _strncpy-Copies a string from source to destination
  * @dest: destination string
  * @src: Source string
  * @n: counter variable
  * Return: character pointer
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
