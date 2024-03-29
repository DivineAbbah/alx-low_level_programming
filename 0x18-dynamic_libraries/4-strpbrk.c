#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - searchs the  string for any of a set of bytes
 *
 * @s: string to search
 * @accept: defines the search bytes
 *
 * Return: a pointer to the byte in @s
 */


char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
