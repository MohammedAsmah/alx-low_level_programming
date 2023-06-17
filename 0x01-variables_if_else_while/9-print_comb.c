#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: always 0
*/
int main(void)
{
	int a = 0;

while (a < 10)
{
	putchar(a + '0');
	a++;
if (a != 10)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
