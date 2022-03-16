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
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}

