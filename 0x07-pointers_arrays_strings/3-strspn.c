/**
 * _strspn - counts the bytes
 * @s: point to the string
 * @accept: pointer to the character It will compare
 *
 * Return: the total bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int bites, a, b;

	for (a = 0; a < 5; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				bites++;
		}
	}
	return (bites);
}
