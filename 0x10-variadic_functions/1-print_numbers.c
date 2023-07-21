#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers-Prints numbers to the console
  * @separator: delimiter
  * @n: Expected number of arguments
  * ...: Variable number of arguments
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i  = 0;
	int x;

	va_start(arguments, n);
	for (; i < n; i++)
	{
		x = va_arg(arguments, int);
		printf("%d", x);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
