#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  a function that prints all natural numbers from n to 98
 * Return: always 0
 * @n: integer
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 0)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
