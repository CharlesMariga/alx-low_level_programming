#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - gets a function
 * @s: operation string
 *
 * Description: gets a fuction based on the operation
 * string passed
 *
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
