#include<stdio.h>

/**
  * main-Entry point of program
  *
  * Return: (0)
  */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
				continue;
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				if (j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
