#include "main.h"
/**
 *  _isalpha - function to check if the character is a letter
 *  @c: takes input from other functions.
 *  Return: returns 1 if 'c'  is a letter, ortherwise always 0
*/

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
