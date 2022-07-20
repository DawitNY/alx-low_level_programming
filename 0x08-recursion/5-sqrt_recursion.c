#include "main.h"

/**
 * prefun - sqrt of num
 * @i: input
 * @j: iterations
 * Return: sqrt or 1
 */
int prefun(int i, int j)
{
	if (j % (i / j) == 0)
	{
		if (j * (i / j) == i)
			return (j);
	}
	return (0 + prefun(i, j + 1));
}

/**
 * *_sqrt_recursion - atural sqrt
 * @n: input number
 * Return: natrual sqrt of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (prefun(n, 2));
}
