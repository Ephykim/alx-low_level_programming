#include "main.h"

/**
  * _strcat-Concatenates strings
  * @src: Source string
  * @dest: Destination string
  * Return: Character pointer
 */

char *_strcat(char *dest, char *src)
{
	int src_len, dest_len, i, j;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;

	for (i = dest_len, j = 0; j < src_len; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

