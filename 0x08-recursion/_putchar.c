#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes out
 * @c: char to print
 * Return: 1
 */
int -putchar(char c)
{
	return (write(1, &c, 1))
}
