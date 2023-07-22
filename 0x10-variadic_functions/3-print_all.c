#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all-prints anything.
  * @format: The format specifier
  * ...: Variable number of arguments
  *
  * Return: void
  */

void print_all(const char * const format, ...)
{
	va_list args;
	int len = strlen(format);
	int i = 0;
	char d;
	int j;
	float h;
	char *p;

	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				d = (char)va_arg(args, int);
				printf("%c ", d);
				break;
			case 'i':
				 j = va_arg(args, int);
				printf("%d ", j);
				break;
			case 'f':
				 h = (float)va_arg(args, double);
				printf("%f ", h);
				break;
			case 's':
				p = va_arg(args, char *);
				if (p != NULL)
					printf("%s ", p);
				if (p == NULL)
					printf("(nil)");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
