#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: Pointer
 * @n: Integer variable
 */
void print_array(int *a, int n)
{
	int i, j;

	i = n - 1;
	j = 0;
	while (j <= i)
	{
		if (j == i)
		{
			printf("%d", a[j]);
			break;
		}
		printf("%d, ", a[j]);
		j++;
	}
	printf("\n");
}
