#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: arguments vector
 *
 * Description: prints the number of arguments passed into it
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
