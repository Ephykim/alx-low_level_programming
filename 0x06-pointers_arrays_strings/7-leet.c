#include "main.h"

/**
  * leet-encodes a string into 1337
  * @s: pointer to string
  *
  * Return: character pointer to modified string
  */

char *leet(char *s)
{
	int i, j;
	char str[] = "AaEeOoTtLl";
	char str1[] = "443300771122";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j])
				s[i] = str1[j];
		}
	}
	return (s);
}
