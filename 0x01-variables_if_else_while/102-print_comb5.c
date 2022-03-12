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
	int i, j, k, l, nums;

	nums = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					int numI = i - 48;
					int numJ = j - 48;
					int numK = k - 48;
					int numL = l - 48;
					
					int current = (i * 1000) + (j * 100) + (k * 10) + l;
					int perm = (k * 1000) + (l * 100) + (i * 10) + j;
					
					if (current < perm)
					{
						if (nums != 0)
						{
							putchar(44);
							putchar(32);
						}

						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
						nums++;
					}
				}
			}
		}
	}
	putchar(10);

	return (0);
}
