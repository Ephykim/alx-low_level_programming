#include<stdlib.h>
#include<string.h>
#include"main.h"

/**
  * str_concat- concatenates two strings.
  * @s1: String 1
  * @s2: String 2
  *
  * Return: Character pointer
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr, *ptr1;
	int s1_len, s2_len, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	len = s1_len + s2_len + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		*(ptr + i) = s1[i];
	}
	ptr1 = (ptr + i);
	for (j = 0; j < s2_len; j++)
	{
		*(ptr1 + j) = s2[j];
	}
	*(ptr1 + j) = '\0';
	return (ptr);
}
