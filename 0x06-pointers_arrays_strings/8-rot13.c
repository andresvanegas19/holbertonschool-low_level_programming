/**
 * rot13 - encodes a strign into ROT
 * @s: an array is in noraml
 *
 * Return: a encryptin result
 */

char *rot13(char *s)
{

	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encriptado[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	/* para encriptar */
	int a, b;

	for (a = 0, b = 0; s[a] != '\0' && original[b] != '\0'; a++, b++)
	{
		if (s[a] == original[b])
		{
			s[a] = encriptado[b];
			break;
		}
	}

	return (s);
}
