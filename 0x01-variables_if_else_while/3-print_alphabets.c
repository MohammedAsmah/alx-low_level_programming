#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: always 0
*/
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
while (LETTER <= 'Z')
{
putchar(LETTER);
LETTER++;
}
putchar('\n');
return (0);
}

