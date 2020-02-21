/**
 * rot13 - encodes a strign into ROT
 * @s: an array is in noraml
 *
 * Return: a encryptin result
 */

char *rot13(char *arr)
{

	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encriptado[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	/* para encriptar */
	int a, b;

	for (a = 0; arr[a]; a++)
	{
		for (b = 0; arr[b] ; b++)
		{
			if (arr[a] == original[b])
			{
				arr[a] = encriptado[b];
				break;
			}
		}
	}

	return (arr);
}
