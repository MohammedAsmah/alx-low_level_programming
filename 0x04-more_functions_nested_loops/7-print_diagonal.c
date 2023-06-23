#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: the number of times the \ character should be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postnc <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
