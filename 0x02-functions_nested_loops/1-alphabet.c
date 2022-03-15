#include "main.h"

/**
 * main - prints alphabets
 *
 * Description: prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return (0);
}
