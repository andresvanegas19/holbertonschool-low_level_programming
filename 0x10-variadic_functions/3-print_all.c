#include <stdarg.h>
#include <stdio.h>

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
		if ((format[i + 1] != '\0') && (format[i] == 's' ||
		format[i] == 'c' || format[i] == 'f' || format[i] == 'i'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(allprint);
}
