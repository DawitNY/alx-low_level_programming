#include "main.h"

/**
 * print_triangles - triangle
 * @size: size
 * Return: none
 */
void print_triangle(int  size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
