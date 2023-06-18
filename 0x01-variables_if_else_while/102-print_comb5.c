#include <stdio.h>
/**
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: always 0
*/

int main(void)
{
	int i = 0, j = 1;

	while (i < 100)
	{
		while (j < 100)
		{
			if (i / 10 != j / 10 || i % 10 != j % 10)
			{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
				if (i != 98 || j != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}
putchar('\n');
return (0);
}
