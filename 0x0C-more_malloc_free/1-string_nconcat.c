#include<stdlib.h>
#include<string.h>
#include"main.h"

/**
  * string_nconcat- concatenates two strings.
  * @s1: String 1
  * @s2: String 2
  * @n: Number of bytes to concatenate
  * Return: Character pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *ptr1;
	unsigned int s1_len, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	len = s1_len + n + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		*(ptr + i) = s1[i];
	}
	ptr1 = (ptr + i);
	for (j = 0; j < n; j++)
	{
		*(ptr1 + j) = s2[j];
	}
	*(ptr1 + j) = '\0';
	return (ptr);
}
