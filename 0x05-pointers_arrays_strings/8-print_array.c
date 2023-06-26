#include <stdio.h>

/**
  * print_array-Prints an array
  * @a: Pointer to array
  * @n: Length of the array
  * Return: Void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
