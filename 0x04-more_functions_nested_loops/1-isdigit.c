#include "main.h"

/**
  * _isdigit- Check for digit
  * @c: variable to be checked
  *
  * Return: 1 when success 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
