#include <stdio.h>

/**
 * main - fibonacci
 *
 * Description: prints the sum of even valued fibonacci terms between 0 and
 * 4,000,000
 *
 * Return: void
 */
int main(void)
{
	long int count = 3;
	long int previous = 1, current = 2, sum = 0;

	printf("%ld, %ld", previous, current);

	while (count <= 4000000)
	{
		long int new_num = previous + current;

		if (new_num % 2 == 0)
			sum += new_num;

		previous = current;
		current = new_num;
		count++;
	}
	printf("%ld\n", sum);

	return (0);
}

