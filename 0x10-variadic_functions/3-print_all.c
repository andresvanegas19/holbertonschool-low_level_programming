#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list allprint;

	int i = 0, entero;
	const char *s;
	char c;
	float f;


	va_start(allprint, format);

		while (format[i])
		{
			if (format[i] == 'c' ||
			    format[i] == 'i' ||
			    format[i] == 'f' ||
			    format[i] == 's')
			{
				switch(format[i])
				{
				case 's':
					s = va_arg(allprint, const char *);
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
				printf(", ");
			}
			i++;
		}
		printf("\n");
	va_end(allprint);
}
