#include "function_pointers.h"

/**
 * main- prints the opcodes of its own main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}