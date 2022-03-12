#include <stdio.h>

/**
 * main - print combinations
 *
 * Description: prints all possible combinations of two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, nums;

	nums = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				if (nums != 0)
				{
					putchar(44);
					putchar(32);
				}

				putchar(i);
				putchar(j);
				putchar(32);
				putchar(i);
				putchar(k);
				nums++;
			}
		}
	}
	putchar(10);

	return (0);
}
