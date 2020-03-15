#include <stdarg.h>
#include <stdio.h>
/**
 * validar - function that prints anything
 * @c: is a list of types of arguments passed to the function
 */
int validar(char c)
{
	int i = 0;
	char valores[5] = { 's', 'c', 'f', 'i'};

	while (i < 5)
	{
		if (valores[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list allprint;
	int i = 0, entero;
	char *s, c;
	float f;

	va_start(allprint, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 's':
			s = va_arg(allprint, char *);
			if (s != NULL)
			{
				printf("%s", s);
				break;
			}
			printf("(nil)");
			break;
		case 'c':
			c = va_arg(allprint, int);
			printf("%c", c);
			break;
		case 'f':
			f = va_arg(allprint, double);
			printf("%f", f);
			break;
		case 'i':
			entero = va_arg(allprint, int);
			printf("%d", entero);
			break;
		}
		if ((format[i + 1] != '\0') && validar(format[i]))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(allprint);
}
