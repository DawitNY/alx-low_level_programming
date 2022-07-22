#include <stdio.h>

/**
 * main - no of arguments passed in
 * @argc: count
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
