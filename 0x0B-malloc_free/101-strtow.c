#include "main.h"
#include <stdlib.h>
/**
 * count_words_R - count number of words
 * @str: pointer
 * @i: current index
 * Return: number of words
 **/
int count_words_R(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + count_words_R(str, i + 1));
	return (count_words_R(str, i + 1));
}
/**
 * count_words - counts number of words.
 * @str: pointer
 * Return: number of words
 **/
int count_words(char *str)
{
	if (str[0] != ' ')
		return (1 + count_words_R(str, 0));
	return (count_words_R(str, 0));
}
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 *
 * Return: pointer to an array of strings.
 **/
char **strtow(char *str)
{
	char **str_d;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = count_words(str);
	if (words < 1)
		return (NULL);
	str_d = malloc(sizeof(char *) * (words + 1));
	if (str_d == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			str_d[i] = malloc(sizeof(char) * (n + 1));
			if (str_d[i] == NULL)
			{
				while (--i >= 0)
					free(str_d[--i]);
				free(str_d);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				str_d[i][m] = *str;
				m++, str++;
			}
			str_d[i][m] = '\0';
			i++;
		}
		str++;
	}
	str_d[i] = '\0';
	return (str_d);
}
