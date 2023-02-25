#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: 0
 */

int main(void)
{
	int b = 1;

	while (b <= 100)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (b % 3 == 0)
		{
			printf("Fizz");
		}
		else if (b % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d\n", b);
		}

		b++;
	}
	/* printf("\n"); */
	return (0);
}
