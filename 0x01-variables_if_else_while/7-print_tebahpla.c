#include <stdio.h>

/**
 * main - prints letters
 *
 * Description: prints lowerase letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
