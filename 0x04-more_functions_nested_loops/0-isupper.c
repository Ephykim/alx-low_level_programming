#include "main.h"

/**
  * _isupper-Check for uppercase letters
  * Return: 1 when upppercase 0 otherwise
  * @c: Ascii code
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
