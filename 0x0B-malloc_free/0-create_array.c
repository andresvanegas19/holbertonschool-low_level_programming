/**
 * create_array - creates an array of chars
 * @size: is the size of the array
 * @c: char it will fill the array
 *
 * Return: the array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(sizeof(*arr) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
