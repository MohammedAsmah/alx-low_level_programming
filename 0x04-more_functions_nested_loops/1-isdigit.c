#include "main.h"
/**
 * _isdigit - check for a digit (0 through 9)
 * @c: input
 * Return: Return 1 if c is a digit else return 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
