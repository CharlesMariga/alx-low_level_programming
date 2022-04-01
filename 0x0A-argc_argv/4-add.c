#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks to see if input is a number
 * @s: input to check for numberhood
 * Return: 1 if it is a number, 0 if not
 */

int is_number(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

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
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
