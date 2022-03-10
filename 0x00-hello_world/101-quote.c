#include <stdio.h>

/**
 * main - prints to stderr
 *
 * Description: prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19" to the stderr
 *
 * Return:  1 (Error)
 */
int main(void)
{
	fprintf(stderr, "and that piece of art is useful\" "
	"- Dora Korpar, 2015-10-19\n");
	return (1);
}
