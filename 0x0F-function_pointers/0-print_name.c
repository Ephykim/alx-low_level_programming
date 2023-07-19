#include "function_pointers.h"

/**
  * print_name-Prints a name
  * @name: Pointer a to string
  * @f: A function pointer
  *
  * Return: Void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
