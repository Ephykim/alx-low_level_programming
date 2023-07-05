#include "main.h"

/**
  * _strchr-locates a character in a string.
  * @s: The  String
  * @c: character to be checked
  *
  * Return: character pointer to located charater
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
