#include "main.h"

/**
  * puts2-Prints a character at intervals of 2
  * @str: pointer to a string
  * Return: Void
  */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
