#include "main.h"

/**
  * _strncat-Appends a string from source to destination
  * @dest: Destination string
  * @src:  source string
  * @n: Counter variable
  * Return: Character pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
