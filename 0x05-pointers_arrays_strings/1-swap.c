#include "main.h"

/**
  * swap_int-Swap two integers
  * @a: First integer
  * @b: Second integer
  * Return: Void
  */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
