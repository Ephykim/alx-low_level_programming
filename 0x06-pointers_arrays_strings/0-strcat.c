#include "main.h"

/**
  * _strcat-Appends s2 to s1
  * @dest: Destination string
  * @src:  Source string
  * Return: character pointer
  */

char *_strcat(char *dest, char *src)
{
	int i, j, dest_len, src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (src_len = 0; src[src_len] != '\0'; src_len++)
		;
	for (i = dest_len, j = 0; j <= src_len; i++, j++)
		dest[i] = src[j];
	return (dest);
}
