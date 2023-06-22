#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 * Return: always 0
*/
void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar(1 + 48);
				c = b % 10;
			}
			_putchar(c + 48);
		}
		_putchar('\n');
	}
}
