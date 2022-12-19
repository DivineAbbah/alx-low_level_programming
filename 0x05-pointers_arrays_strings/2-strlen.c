#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: the int len of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
