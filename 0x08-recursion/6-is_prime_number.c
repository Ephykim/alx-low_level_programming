#include "main.h"
int isDivisible(int n, int d);

/**
  * isDivisible-Checks divisibilty test
  * @n: Divided
  * @d: Divisor
  *
  * Return:(1) success
  */

int isDivisible(int n, int d)
{
	if (d == 1)
		return (1);
	else if (n % d != 0 && d < n)
		return (isDivisible(n, d - 1));
	else
		return (0);
}

/**
  * is_prime_number-Checks if a number is prime or not
  * @n: The number to be checked
  *
  * Return: (1) success
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (isDivisible(n, n - 1));
}
