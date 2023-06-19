#include<stdio.h>

/**
  * main-Prints the base 16 numbers in lowercase
  * Return: (0)
  */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (j < 103)
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
