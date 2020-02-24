char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s != '\0')
		{
			return s = 00;
		}
		s++;
	}
	return (s);
}
