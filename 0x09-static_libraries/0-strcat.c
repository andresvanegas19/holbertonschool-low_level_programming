/**
 * _strcat - this will print the array
 * @dest: The character to print
 * @src: The character to print
 *
 * Return: the string into dest.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
/*  dest va tomar toda la cadena y va ser retornada*/
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
