#include <unistd.h>
/**
 * _putchar - function that prints
 * @c - character to print
 * Return - 1 if successful.
 */
int _putchar(char, c)
{
	return (write(1, &c, 1));
}
