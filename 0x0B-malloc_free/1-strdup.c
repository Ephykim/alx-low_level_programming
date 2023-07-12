#include <stdlib.h>
#include "main.h"

/**
  * _strdup-Duplicates  a string using malloc
  * @str: pointer to string
  *
  * Return: Pointer to the new string
  */

char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (str == NULL)
		return ('\0');
	for (len = 0; str[len] != '\0'; len++)
		;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(ptr + i) = str[i];
	}
	*(ptr + i) = '\0';
	return (ptr);
}
