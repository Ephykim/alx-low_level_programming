#include<stdio.h>
/**
  * main - Entry point of the program
  * Description - Printing sizes of data types
  *
  * Return: (0) when succes
  */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char : %lu bytes(s)", sizeof(a));
	printf("Size of an int : %lu bytes(s)", sizeof(b));
	printf("Size of a long int : %lu bytes(s)", sizeof(c));
	printf("Size of a long long int : %lu bytes(s)", sizeof(d));
	printf("Size of a float : %lu bytes(S)", sizeof(e));
	return (0);
}
