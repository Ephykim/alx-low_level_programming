#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String pointer
 * @accept: String pointer
 * Return: Pointer to a matching character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
