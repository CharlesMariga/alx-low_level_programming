#include <stdio.h>

/**
 * main - prints combinations
 *
 * Description: Prints combinations fo 3 different numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int numsPrinted = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				if (numsPrinted != 0)
				{
					putchar(44);
					putchar(32);
				}

				putchar(i);
				putchar(j);
				putchar(k);

				numsPrinted++;
			}
		}
	}
	putchar(10);

	return (0);
}
