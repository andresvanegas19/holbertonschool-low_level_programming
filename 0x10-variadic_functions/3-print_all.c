#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list allprint;
	int i = 0, entero, j = 0;
	char *s, c;
	float f;

	while (format[i])
		i++, j++;
	va_start(allprint, format);
	i = 0;
		while (format[i])
		{
			if (format[i] == 'c' || format[i] == 'i' ||
			    format[i] == 'f' ||   format[i] == 's')
			{
				switch (format[i])
				{
				case 's':
					s = va_arg(allprint, char *);
					printf("%s", s);
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
				if (i < j - 1)
					printf(", ");
			}
			i++;
		}
		printf("\n");
	va_end(allprint);
}
