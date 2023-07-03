#include "main.h"

/**
  * rot13-Rotates a character to its 13th equivalent
  * @s: pointer to string
  * Return: Character pointer
  */

char *rot13(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			s[i] += 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			s[i] -= 13;
	}
	return (s);
}
