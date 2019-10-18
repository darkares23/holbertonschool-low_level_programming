#include <stdlib.h>
#include <stdio.h>

/**
*_realloc - entry point
*@ptr: void variable
*@old_size: old size variable
*@new_size: new size int variable
*Return: ptr or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *ar;
	unsigned int i;

if (ptr == NULL)
{
ar = malloc(new_size);
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (ar);
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);

if (new_size > old_size)
old_size = new_size;

for (i = 0; i < old_size; i++)
new_ptr[i] = ((char *)(ptr))[i];

free(ptr);
return (new_ptr);
}
