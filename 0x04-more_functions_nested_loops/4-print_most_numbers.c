#include "main.h"

/**
  * print_most_numbers-Displays digits 0-9 except 2,4.
  * Return: void
  */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + 48);
	}
	_putchar('\n');
}
