#include "holberton.h"
/**
 * print_chessboard - print a chess an it is a dimensional array
 * @a: the pointer to array
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
