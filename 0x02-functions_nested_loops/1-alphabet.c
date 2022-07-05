#include "main.h"

/**
 *main: print the output of the alphabet
 *return 0
 *
 */

/* Printing the alphabets */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
