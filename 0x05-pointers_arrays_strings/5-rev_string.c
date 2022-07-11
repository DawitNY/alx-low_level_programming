#include "main.h"

/**
 * rev_string - string reversely
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int revc = 0;
	int i, j;
	char temp, *str;

	while (revc >= 0)
	{
		if (s[revc] == '\0')
			break;
		revc++;
	}
	str = s;

	for (i = 0; i < (revc -  1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
