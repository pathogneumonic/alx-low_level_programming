#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0.
 */

int main(void)
{
	long int n, x;

	n = 612852475143;
	for (x = 2; x <= n; x++)
	{
		if (n % x == 0)
		{
			n /= x;
			x--;
		}
	}
	printf("%1d\n", x);
	return (0);
}
