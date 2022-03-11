#include <stdio.h>

/**
 * main - print letters
 *
 * Description: prints alphabet letters in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 97;
	int last = 122;

	for (; first <= last; first++)
	{
		putchar(first);
	}
	putchar(10);

	return (0);
}
