#include <stdio.h>
/**
 * main - Prints all alphabets in reverse
 * Return: always 0
*/
int main(void)
{
	char letter = 'z';

while (letter >= 'a')
{
	putchar(letter);
	letter--;
}
putchar('\n');
return (0);
}
