#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - get function to dop math.
 *@s: operator
 * Return: Always 0.
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
int i = 0;

	while (i < 5)
	{
		if (!(strcmp((ops[i]).op,s)))
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
