#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: always 0
 */
int main(void)
{
	int a = 0;
	int b = 1;

	while (a <= '8')
	{
	while (b <= '9')
	{
		if (a != b && a < b)
		{
		putchar(a + '0');
		putchar(b + '0');
			if (a != '8' && b != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
		b++;
	}
	a++;
	b = a + '1';
	}
putchar('\n');
return (0);
}
