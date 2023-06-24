#include "main.h"

/**
  * more_numbers-Prints 0-14 10 times
  * Return: void
  */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
