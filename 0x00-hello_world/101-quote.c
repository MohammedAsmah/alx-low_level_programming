#include <unistd.h>
/**
 * main - Enetry point
 * Description: Print a qoute using write function
 *       ssize_t write(int fd, const void *buf, size_t count)
 * Return: 1 (error).
*/
int main(void)
{
	char qua[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qua, 59);
	return (1);
}
