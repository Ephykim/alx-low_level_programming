#include "main.h"

/**
 * findsqroot - finds the square root of number
 * @a:Starting point
 * @b:The number
 *
 * Return: Square root
 */

int findsqroot(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (findsqroot(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to find sq root of
 *
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (findsqroot(1, n));
	}
}
