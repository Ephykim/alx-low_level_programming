#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Character pointer
 * @accept: Character pointer
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n, i, j;

	m = 0;
	n = 0;
	i = 0;
	j = 0;
	while (accept[m] != '\0')
	{
		m++;
	}
	if (*s == '\0')
	{
		return (n);
	}
	while (i <= m)
	{
		if (s[n] == accept[j])
		{
			n++;
			j = 0;
			i = 0;
		}
		else
		{
			j++;
		}
		i++;
	}
	return (n);
}
