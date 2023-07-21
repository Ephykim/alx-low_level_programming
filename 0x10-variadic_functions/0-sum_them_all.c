#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all-Adds all arguments in a function
  * @n: The number of arguments to expect
  * ...:Variable number of arguments
  *
  * Return: Sum of all arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (; i < n; i++)
	{
		int arg = va_arg(args, int);

		sum += arg;
	}
	va_end(args);
	return (sum);
}
