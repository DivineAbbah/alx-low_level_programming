#include "main.h"

/**
 * _puts - prints the string and a new line
 * @str: pointer to the string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
