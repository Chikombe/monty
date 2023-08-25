#include "monty.h"

/**
 * _isascii - checks if the supplied input is an ascii
 * @c: the integer to input
 * Return: on successb 1, otherwise 0
 */
int _isascii(int c)
{
	return (c >= 0 && c <= 127);
}
