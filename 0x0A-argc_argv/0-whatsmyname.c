#include <stdio.h>
/**
 * main - prints its name,followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains program command line argument.
 * Return: 0 - success
 */

int main(int arg __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
