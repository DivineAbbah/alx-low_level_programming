/**
 * _strcmp - function to compare the character
 * @s1: The  first variable to compare
 * @s2:The second variable for comparism
 * Return: the difference between the first character that are not the same
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
