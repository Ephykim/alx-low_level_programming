#include "main.h"
/**
 * _memcpy-a functio to copy mem address
 *@dest:from
 *@src:to
 *
 * @n:number of bytes
 * Return:copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
