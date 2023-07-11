#include "main.h"

/**
  * _strlen-Prints a string in reverse
  * @s: Pointer to string
  * Return: (i)
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
