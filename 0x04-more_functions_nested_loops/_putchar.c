#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes
 * @c: char
 *
 * Returns: 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
