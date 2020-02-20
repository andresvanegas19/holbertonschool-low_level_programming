/**
 * *_strncat - concat two pointers
 * @dest: The character to print
 * @src: The character to print
 * @n: It's the limit of array of src
 *
 * Return: dest return the complite array.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	n = n;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] < src[n] && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
