#include <stdio.h>

/**
 * main - fibonacci
 *
 * Description: prints the first 98 numbers of a fibonacci series
 *
 * Return: void
 */
int main(void)
{
	unsigned long int count = 3;
	unsigned long int previous = 1, current = 2;

	printf("%ld, %ld", previous, current);

	while (count <= 98)
	{
		unsigned long int new_num = previous + current;

		printf(", %ld", new_num);
		previous = current;
		current = new_num;
		count++;
	}
	printf("\n");

	return (0);
}
