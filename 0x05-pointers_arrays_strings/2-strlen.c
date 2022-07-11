#include "main.h"

/**
 * _strlen - returns length
 * @s: string
 * Return: len
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
