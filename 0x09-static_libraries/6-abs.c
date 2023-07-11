#include "main.h"

/**
  * _abs-returns the absolute value of a digit
  * @n: The Digit
  *
  * Return: Absolute value
  */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
