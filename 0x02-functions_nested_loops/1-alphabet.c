#include "main.h"
/* More header files goes here */

/*Function prototype declaration*/
void print_alphabet(void);

/**
 * main-Entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet-Prints the alphabet in lowercase
 * Return:(0)
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
	return (0);
}
