#include <stdio.h>

/**
 * main - prints combinations
 *
 * Description: prints all possible combinations of a single
 * digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
