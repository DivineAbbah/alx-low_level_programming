#include "main.h"

/**
 * _memcpy -copies memory area
 *
 * @dest: the mem arera to copy to
 * @n: the no of bytes to copy
 * @src: the mem area to copy from
 *
 * Return: a pointer to the dest variable
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x]

	return (dest);
}
