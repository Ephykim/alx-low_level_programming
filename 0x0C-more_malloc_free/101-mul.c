#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

/**
  * isNumber-Checks if a string has digits
  * @num: Pointer to the string
  *
  * Return: Boolean value
  */
bool isNumber(char *num)
{
	int len, i;
	bool isnum = true;

	len = strlen(num);
	for (i = 0; i < len; i++)
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
		{
			isnum = false;
			break;
		}
	}
	return (isnum);
}

/**
  * main-Entry point of program
  * @argc: Argument count
  * @argv: Argument Vector
  *
  * Return: (0);
  */
int main(int argc, char **argv)
{
	int i, mul;

	mul = 1;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] == '-')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 1; i < argc; i++)
	{
		if (!(isNumber(argv[i])))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 1; i < argc; i++)
	{
		int tmp = 0;

		tmp = atoi(argv[i]);
		mul *= tmp;
	}
	printf("%d\n", mul);
	return (0);
}

