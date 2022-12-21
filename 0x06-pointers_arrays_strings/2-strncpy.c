#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: The destination variable
 * @src: The source variable
 * @n: Defines the conditional variable
 * Return: Returns the variable defined
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
