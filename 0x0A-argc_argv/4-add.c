#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: adds positive numbers passed as arguments
 * to the program
 *
 * Return:  0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
