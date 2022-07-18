#include "main.h"

/**
 *  * print_chessboard - prints the chessboard
 *   * @a: row
 *    * Return: void
 *     */
void print_chessboard(char (*a)[8])
{
		int i,j;

		for (i = 0; i < 8; i++)
		{
			for (i = 0; i < 8; j++)
			{
				if (j == 7)
				{
					_putchar(a[i][j]);
					_putchar('\n');
				}
				else
					_putchar(a[i][j]);
		}
	}
}
