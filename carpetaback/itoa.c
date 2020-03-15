#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct formats
{
        char *arg;
        void (*f)(va_list, char* , unsigned int *);
} cases;

// inline function to swap two numbers
void swap(char *x, char *y) {
	char t = *x; *x = *y; *y = t;
}

// function to reverse buffer[i..j]
char* reverse(char *buffer, int i, int j)
{
	while (i < j)
		swap(&buffer[i++], &buffer[j--]);

	return buffer;
}

// Iterative function to implement itoa() function in C
char* itoa(int value, char* buffer, int base)
{
	// invalid input
	if (base < 2 || base > 32)
		return buffer;

	// consider absolute value of number
	int n = abs(value);

	int i = 0;
	while (n)
	{
		int r = n % base;

		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;

		n = n / base;
	}

	// if number is 0
	if (i == 0)
		buffer[i++] = '0';

	// If base is 10 and value is negative, the resulting string
	// is preceded with a minus sign (-)
	// With any other base, value is always considered unsigned
	if (value < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0'; // null terminate string

	// reverse the string and return it
	return reverse(buffer, 0, i - 1);
}


void print_int(va_list arguments, char *buffer, int *position)
{
        int numero = va_arg(arguments, int);
        
        (void) buffer;
        itoa(numero, position, 10);
        
      
}

/**
 * _printf - The printf main function
 * @format: the recieve format.
 * Return: Pointer
 */

int _printf(const char *format, ...)
{
        va_list arguments;
        char *buffer = malloc (2048);
        int i = 0;
        unsigned int cfor;
        unsigned int carg;
        unsigned int *position;


        cases print_format[] = { {"i", print_int}};
        va_start(arguments, format);
        position = malloc(sizeof (int));
        if (position == NULL)
                return (1);

        *position = 0;

        if (format == NULL)
                return (1);
        cfor = 0;
        carg = 0;
        while (format[cfor])
        {
                if (format[cfor] == '%')
                {
                        cfor++;
                        carg = 0;
                        while (carg < 1)
                        {
                                if (format[cfor] == print_format[carg].arg[0])
                                        print_format[carg].f(arguments, buffer, position);
                                carg++;
                        }
                }
                else
                {
                        buffer[*position] = format[cfor];
                        *position += 1;
                }

                cfor++;
        }

        write(1, buffer, *position);
        

        free(buffer);
        free(position);
        va_end (arguments);

        return (*position);
}
int main()
{
	int perro = 2373223423;
	_printf("Hello Worl dffsgfdfds  %i", perro);

	return 0;
}
