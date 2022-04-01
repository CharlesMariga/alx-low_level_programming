#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: multiples two numbers passed as arguments
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	(void)argc;
	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
