#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: String variable
 */
void puts_half(char *str)
{
	int length_of_the_string, n;

	length_of_the_string = 0;
	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}
	if (length_of_the_string % 2 != 0)
	{
		n = (length_of_the_string + 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}
	while (n < length_of_the_string)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
