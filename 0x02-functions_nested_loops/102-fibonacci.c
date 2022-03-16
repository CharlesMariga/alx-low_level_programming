#include <stdio.h>

/**
 * main - fibonacci
 *
 * Description: prints the first 50 numbers of a fibonacci series
 *
 * Return: void
 */
int main(void)
{
	int count = 2, previous = 1, current = 2;

	printf("%d, %d", previous, current);

	while (count <= 50)
	{
		int new_num = previous + current;

		printf(", %d", new_num);
		previous = current;
		current = new_num;
		count++;
	}
	printf("\n");

	return (0);
}
