/**
 * _strlen - get length for a string
 * @s: string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
		++c;

	return (c);
}
