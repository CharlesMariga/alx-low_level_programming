#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints the minimum number of coins to make
 * change for an amount of money
 *
 * Return: 0 if success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int numOfCoins = 0, remainder;
	int values[5] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}

	remainder = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (remainder / values[i])
		{
			numOfCoins += remainder / values[i];
			remainder = remainder % values[i];
		}
	}

	printf("%d\n", numOfCoins);

	return (0);
}
