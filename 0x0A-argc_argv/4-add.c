#include <stdio.h>
#include <stdlib.h>

/**
  * main-Entry point of program
  * @argc: Argument count
  * @argv: Argument Vector
  *
  * Return: (0) when success
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{

		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			int x = atoi(argv[i]);

			sum += x;
		}
		else
		{
			sum = 0;
			printf("Error\n");
			return (1);
		}
	}
	if (sum != 0)
		printf("%d\n", sum);
	return (0);
}
