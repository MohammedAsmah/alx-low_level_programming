#include "main.h"
/**
 * print_alphabet_x10 - function that will rpint the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int ch;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	_putchar('\n');
}
