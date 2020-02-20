/**
 * rev_string - print the reverse of the string
 * @s: pointer to the string
 */
void reverse_array(int *a, int n)
{
	int save, i = 0;

	n = n - 1;
	while (n >= i)
	{
		save = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = save;
		n--;
		i++;
	}
}
