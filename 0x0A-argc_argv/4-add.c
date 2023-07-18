#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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
  * main-Entry point of the program
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: (0)
  */

int main(int argc, char **argv)
{
	int sum = 0;
	int i, number;

	if (argc < 2)
	{
		putchar('0');
		putchar('\n');
	}
	for (i = 1; i < argc; i++)
	{
		if (!(isNumber(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			number = atoi(argv[i]);
			sum += number;
		}
	}
	if (sum != 0)
		printf("%d\n", sum);
	return (0);
}
