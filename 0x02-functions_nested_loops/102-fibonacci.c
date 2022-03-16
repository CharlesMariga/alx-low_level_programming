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
	int count = 2;
	long int previous = 1, current = 2;

	printf("%ld, %ld", previous, current);

	while (count <= 50)
	{
		long int new_num = previous + current;

		printf(", %ld", new_num);
		previous = current;
		current = new_num;
		count++;
	}
	printf("\n");

	return (0);
}
