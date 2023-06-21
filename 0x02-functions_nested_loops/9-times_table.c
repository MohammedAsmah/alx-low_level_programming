#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int a, b;
	int timestable;

	for (a = 0; a < 10; a++)
	{
		_putchar(48);
		for (b = 0; b < 10; b++)
		{
			_putchar(',');
			timestable = a * b;
			if (timestable < 10)
				_putchar(' ');
			else
				_putchar((timestable / 10) + 48);
			_putchar((timestable % 10) + 48);
		}
	_putchar('\n');
	}
}
