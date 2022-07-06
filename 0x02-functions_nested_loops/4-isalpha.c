#include "main.h"

/**
 * _isalpha - checks for alpha
 *
 * @c: checker
 *
 * Return: Always 1 for letter, 0 for  rest
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
