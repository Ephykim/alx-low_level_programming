#include "main.h"

/**
  * string_toupper-Convert string to Uppercase
  * @s: pointer to string
  * Return: Character pointer
  */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
