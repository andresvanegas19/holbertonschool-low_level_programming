/**
 * _memcpy - copy a array and certenly point add a strings
 * @dest: the address of memory to print
 * @src: the address It will print
 * @n: limit of the array
 *
 * Return: the array already copy.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a, b = n;
	char *copyDest = dest, *copySrc = src;

	for (a = 0; a < b; a++)
	{
		copyDest[a] = copySrc[a];
	}
	return (copyDest);
}
