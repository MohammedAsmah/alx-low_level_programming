#include <stdio.h>
/**
 * main - prints the all alphabet in lowercase  except q and e.
 * Return: always 0
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
