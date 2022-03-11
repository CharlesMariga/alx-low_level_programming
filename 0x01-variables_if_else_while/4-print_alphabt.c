#include <stdio.h>

/**
 * main - prints letters
 *
 * Description - prints all letters in lowercase except for
 * q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 97;
	int last = 122;

	for (; first <= last; first++)
	{
		if (first == 101 || first == 113)
		{
			continue;
		}
		putchar(first);
	}
	putchar(10);

	return (0);
}
