#include "main.h"

/**
  * factorial-Finds factorial of number
  * @n: The number
  *
  * Return: Factorial of n
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
