#include "main.h"
/**
 *  _islower - function to check is character in lowercase
 *  @c: checks input ofvfunction
 *  Return: returns 1 if 'c' is lowercase ortherwise always 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
