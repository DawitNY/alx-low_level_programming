#include <stdio.h>
#include <stdlib.h>
#nclude <ctype.h>

/**
 * main - adds positive nums
 * argc: count
 * argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i ++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Eroor\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
