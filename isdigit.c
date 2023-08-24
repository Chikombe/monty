#include "monty.h"

/**
 * _isdigit - checks for a digit in a string
 * @str: the string to check
 * Return: on success 0, otherwise 1
 */
int _isdigit(char *str)
{
	int itr;

	for (itr = 0; str[itr]; itr++)
	{
		if (str[itr] < 48 || str[itr] > 57)
			return (1);
	}
	return (0);
}
