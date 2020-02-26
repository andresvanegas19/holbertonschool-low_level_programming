/**
 * _strlen_recursion - give the length of a string.
 * @s: pointer to the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return 1 + _strlen_recursion((s + 1));
	}
	return;
}
