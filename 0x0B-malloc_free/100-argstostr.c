#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  * argstostr-concatenates all the arguments of your program
  * @ac: Argument count
  * @av: Argument Vector
  *
  * Return: Character pointer
  */
char *argstostr(int ac, char **av)
{
	int t_len, len, idx, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		t_len += strlen(av[i]) + 1;
	}
	str = malloc(t_len + 1);
	if (str == NULL)
		return (NULL);
	idx = len = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strcpy((str + idx), av[i]);
		idx += len;
		str[idx] = '\n';
		idx++;
	}
	str[t_len] = '\0';
	return (str);
}
