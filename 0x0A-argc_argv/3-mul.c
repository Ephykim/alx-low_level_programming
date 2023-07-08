#include <stdio.h>
#include <stdlib.h>

/**
  * main-Entry point of program
  * @argc: Argument count
  * @argv: Argument count
  *
  * Return: (0) when success (1) otherwise
  */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x, y, sum = 0;

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		sum = x * y;
		printf("%d\n", sum);
		return (0);
	}
}
