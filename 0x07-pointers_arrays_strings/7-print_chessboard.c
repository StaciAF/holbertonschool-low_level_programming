#include "holberton.h"
/**
 * print_chessboard - prints the chessboard (2d array)
 * @a: array to be used for board
 *
 * Description: prints given 8x8 array
 * Return: in main
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
