#include "main.h"

/**
  * _strcpy-Copies a string
  * @dest: Destination
  * @src: Source
  * Return: Pointer to destination
  */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}

