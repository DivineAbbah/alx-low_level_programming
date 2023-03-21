#include "main.h"

/**
 * _memcpy - Copies the  memory area
 *
 * @dest: the memory area to copy from
 * @n: the no of bytes to copy
 * @src: the memory area to copy from
 *
 * Return: a pointer to the dest variable
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
