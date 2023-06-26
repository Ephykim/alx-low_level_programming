#include "main.h"

/**
  * puts_half-Prints second half of a string
  * @str: Pointer To string
  * Return: Void
  */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str != '\0'; i++)
		;
	if (i % 2 != 0)
	{
		for (j = (i - 1) / 2; j <= i; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
	else
	{
		for (j = i / 2; j <= i; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
}
