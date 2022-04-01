#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: arguments vector
 *
 * Description: prints the name of the program
 *
 * Return: 0 fr success
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
