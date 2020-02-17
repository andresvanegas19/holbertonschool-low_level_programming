/**
 * swap_int - swap the variables
 * @a: pointer to the variable a
 * @b: pointer to th variable b
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
