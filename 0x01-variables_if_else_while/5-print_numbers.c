#include <stdio.h>
#include <unistd.h>
/**
 * main -entry point
 * Description: program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	puchar('\n');
	return (0);
}
