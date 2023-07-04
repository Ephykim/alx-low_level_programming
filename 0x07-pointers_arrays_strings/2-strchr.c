#include "main.h"

/**
  * _strchr- locates a character in a string.
  * @s: pointer to string
  * @c:charater to replace with
  *
  * Return: character pointer
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

