#include<stdio.h>

/**
  * main-Prints all possible combination of single digits
  * Return: (0)
  */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
