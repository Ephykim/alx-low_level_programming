#include <stdio.h>

/**
  * main-fizzbuzz challenge
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz\n\n");
		else if (i % 3 == 0)
			printf("Fizz\n\n");
		else if (i % 5 == 0)
			printf("Buzz\n\n");
		else
			printf("%d\n\n", i);
	}
	return (0);
}
