/**
 * print_name - recive the name and the function and return  prints a name.
 * @name: name of the person
 * @f: is a function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
