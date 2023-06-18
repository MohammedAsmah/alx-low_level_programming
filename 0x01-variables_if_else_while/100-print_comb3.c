#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			if (i != j)
			{
			putchar(i + '0');
			putchar(j + '0');
				if (i != 8 || j != 9)
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
