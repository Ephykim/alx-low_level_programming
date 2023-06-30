#include "main.h"

/**
  * reverse_array-Reverses an array
  * @a: Pointer to array
  * @n: Length of array
  * Return: Void
  */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < (n / 2))
	{
		int temp = 0;

		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
