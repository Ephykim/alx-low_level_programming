#include "main.h"

/**
  * _isupper-Checks if a character is uppercase or not
  * @c:The character
  *
  * Return:(1) when success
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
