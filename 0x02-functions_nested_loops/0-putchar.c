#include "main.h"
/**
 * main - prints _putchar using putchar prototype
 * Return: always 0.
*/
int mAIN(void)
{
	char str[] = "_putchar";
	int ch;
	for (ch = 0; ch < 8; ch++)
	_putchar(str[ch]);
	_putchar('\n');
return (0);
}
