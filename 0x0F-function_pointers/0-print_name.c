#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function to print the name
 *
 * Description: prints a name using function f
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
