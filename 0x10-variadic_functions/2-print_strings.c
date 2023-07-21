#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings-Prints strings to the console
  * @separator:The delimiter specified
  * @n: The expected number of arguments
  * ...:Variable of arguments
  *
  * Return: Void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (; i < n; i++)
	{
		char *str;

		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)\n");
		else
			printf("%s", str);
		if ((separator != NULL) && (i < (n - 1)))
			printf("%s", separator);
	}
		printf("\n");
		va_end(args);
}
