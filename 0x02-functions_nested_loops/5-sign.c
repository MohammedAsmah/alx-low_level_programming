#include "main.h"
/**
 * print_sign - prints + if n is greater than zero,
 *              0 if n is zero and - if n is less than zero.
 *
 * @n: takes integar type input for function.
 *
 * Return: return 1 if n is greater than zero,
 *         return 0 if n is zero else return -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
}
