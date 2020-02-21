/**
 * *cap_string - became uppercase each beggining letter
 *@arr: pointer to the array
 *
 *Return: the string whit each word has in uppercase
 */

char *cap_string(char *arr)
{

	int a, b;
	char separador[] = {' ', '\t', '\n', ',', ';', '.', '!'
				, '?', '"', '(', ')', '{', '}'};

	if (*arr >= 'a' && *arr <= 'z')
		*arr -= 32;

	for (a = 0; arr[a] != '\0'; a++)
	{
		for (b = 0; separador[b] != '\0'; b++)
		{
			if (arr[a] == separador[b])
			{
				if (arr[a + 1] >= 'a' &&  arr[a + 1] <= 'z')
					arr[a + 1] -= 32;
			}
		}
	}

	return (arr);
}
