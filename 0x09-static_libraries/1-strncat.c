#include "main.h"

/**
  * _strncat-Concatenates at most n bytes
  * @src: Source string
  * @dest: Destination string
  * @n: Size
  *
  * Return: Character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_len, dest_len, i, j;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;

	for (i = dest_len, j = 0; j < src_len && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

