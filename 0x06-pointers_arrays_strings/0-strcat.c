/**
 * _strcat - functions to concatenate two strings
 * @dest: the destination string
 * @src: The source string
 * Return: pointer to the  resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, z;

	i = 0;
	for (z = 0; dest[z] != '\0'; z++)
		;
	while (src[i] != '\0')
	{
		dest[z + i] = src[i];
		i++;
	}
	return (dest);
}
