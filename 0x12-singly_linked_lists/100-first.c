#include "lists.h"

void exe_before (void) __attribute__ ((constructor));
/**
* exe_before - prints before the main func.
*/
void exe_before(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
