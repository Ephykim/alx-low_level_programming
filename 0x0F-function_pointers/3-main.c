#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
  * main-The entry point of the program
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: (0)
  */

int main(int argc, char **argv)
{
	int num1, num2, result = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(operator) == NULL || operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((num2 == 0 && *operator == '/') || (num2 == 0 && *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
