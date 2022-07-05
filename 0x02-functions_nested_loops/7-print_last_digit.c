#include "main.h"

/**
 * print_last_digit -. prints last number
 * @n: passed arg
 * reutn last digit 
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	putchar(x + '0');
	return (x);
}
