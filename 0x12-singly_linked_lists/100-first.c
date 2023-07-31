#include <stdio.h>
void print_main(void) __attribute__((constructor));

/**
  * print_main-Prints string to the console
  *
  * Return: void
  */
void print_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

