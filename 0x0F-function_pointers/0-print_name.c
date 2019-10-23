#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: printing text
 */

void print_name(char *name, void (*f)(char *))
{
	void (*pfn)(char *);

	pfn = f;
	pfn(name);
}
