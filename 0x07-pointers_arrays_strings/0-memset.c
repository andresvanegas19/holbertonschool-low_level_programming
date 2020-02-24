/**
 * _memset - fill the array on what I want
 * @s: the pointer to the array we recive
 * @b: the content of the array
 * @n: the limit of the content on the array
 *
 * Return: the array already fills.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
