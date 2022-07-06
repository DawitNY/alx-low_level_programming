#include  "main.h"

/**
 * times_table - times table 1-9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, count;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			count = i * j;
			_putchar(44);
			_putchar(32);
			if (count <= 9)
			{
				_putchar(32);
				_putchar(count + 48);
			}
			else
			{
				_putchar((count / 10) + 48);
				_putchar((count % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
