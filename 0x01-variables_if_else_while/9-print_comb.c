#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: program that prints all possible combinations of single-digit
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = '0'; x < '10'; x++)
	{
		putchar(x);

		if (x != '10')
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
