#include "main.h"

/**
 * puts2 - print str form first char
 * @str: string
 * Retrun: void
 */
void puts2(char *str)
{
	int tint = 0;

	while (tint >= 0)
	{
		if (str[tint] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (tint % 2 ==  0)
			_putchar(str[tint]);
		tint ++;
	}
}
