/**
 * leet - change the letters to numbers
 * @s: pointer to the string
 *
 * Return: they return the string to number
 */
char *leet (char *s)
{
	int a, b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	while (b < a)
	{
		((s[b] == 'a' || s[b] == 'A') && (s[b] = '4')) ||
		((s[b] == 'e' || s[b] == 'E') && (s[b] = '3')) ||
		((s[b] == 'o' || s[b] == 'O') && (s[b] = '0')) ||
		((s[b] == 't' || s[b] == 'T') && (s[b] = '7')) ||
		((s[b] == 'l' || s[b] == 'L') && (s[b] = '1'));
	}
	b++;
	return (s);
}
