#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String variable
 */
void rev_string(char *s)
{
	int n, start, end;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	start = 0;
	end = n - 1;
	while (start < end)
	{
		int t = s[start];

		s[start] = s[end];
		s[end] = t;
		start++;
		end--;
	}
}
