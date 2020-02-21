int _strcmp(char *s1, char *s2)
{
	int i = 0, itwo = 0;

	while (s1[i] != '\0')
	{
		i++;
		itwo++;
	}

	return (*s1 - *s2);
}
