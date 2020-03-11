/**
 * int_index -  searches for an integer into array
 * @array: is full of integers
 * @size: is the size of the array
 * @cpm: function pointer to the function it will pass
 *
 * Return: is -1 fail the program, if > than 1 is success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, validar;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
		{
			validar = (*cmp)(array[i]);
			if (validar == 1)
				return (i);
		}

	return (-1);
}
