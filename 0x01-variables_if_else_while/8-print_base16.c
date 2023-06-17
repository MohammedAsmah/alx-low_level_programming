#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: always 0
*/
int main(void)
{
	char letter = 'a';
	int a = 0;

while (a < 10)
{
	putchar(a + '0');
	a++;
}
while (letter <= 'f')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
