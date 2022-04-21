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
	printf("%s %s",
	"You're beat! and yet, you must allow,\n",
	"I bore my house upon my back!\n");
}
