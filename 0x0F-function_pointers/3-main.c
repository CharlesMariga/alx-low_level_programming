#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: tests the program
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	char *operations[5] = {"+", "-", "*", "/", "%"};
	int i = 0, index = -1;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] == '\0')
	{
		for (; i < 5; i++)
		{
			if (argv[2][0] == operations[i][0])
				index = i;
		}
	}

	if (index == -1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
