#include <stdio.h>

/**
 * premain - runs before main
 *
 * Description: prints a string before the main function
 * is ran
 *
 * Return: void
 */
void __attribute__ ((constructor)) premain()
{
	printf(
	"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	);
}
