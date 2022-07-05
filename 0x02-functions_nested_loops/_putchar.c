#include <unistd.h>

/**
 * _putchar writes c to stdout
 * character print 
 *
 * Return: 1 
 * on error, -1
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
