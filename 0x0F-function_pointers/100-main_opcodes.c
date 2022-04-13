#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: arguement vector
 *
 * Description: prints the opcodes of its own main function
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int n_bytes, i;
	int (*prog)(int, char **) = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x%c", (unsigned char)*((char *)prog + i),
		i < n_bytes - 1 ? ' ' : '\n');
	}

	return (0);
}
