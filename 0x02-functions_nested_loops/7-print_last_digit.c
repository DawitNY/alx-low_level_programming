#include "main.h"

/**
 * print_last_digit - prints last number
 *
 * @n: passed arg
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
