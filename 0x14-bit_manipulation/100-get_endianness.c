/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	short int word = 0x0001;
	char *b = (char *)&word;

	return (b[0] ? 1 : 0);
}
