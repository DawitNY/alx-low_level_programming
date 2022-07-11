#include "main.h"

/**
 * print_rev - print str rev
 * @s: str
 * Return: void
 */
void print_rev(char *s)
{
	int revc = 0;

	while (revc >= 0)
	{
		if (s[revc] == '\0')
			break;
		revc++;
	}

	for  (revc--; revc >= 0; revc--)
		_putchar(s[revc]);
	_putchar('\n');
}
