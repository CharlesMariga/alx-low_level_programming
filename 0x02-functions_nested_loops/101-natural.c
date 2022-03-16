#include <stdio.h>

/**
 * main - sum of multiples
 *
 * Description: calculates the sum of all multipesl of 3 and 5
 * that are below the number 1024
 *
 * Return: void
 */
int main(void)
{
	int sum = 0, i;

	for (i = 1023; i > 0; i--)
	{
		int rem3 = i % 3;
		int rem5 = i % 5;

		if (rem3 == 0 || rem5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
