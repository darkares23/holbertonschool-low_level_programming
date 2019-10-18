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
{   char *ptr2;

    if (old_size == new_size)
        return (ptr);
    if (new_size > old_size)
        {
        free(ptr);
        return (NULL);
    }
    if (ptr == NULL)
    {
        ptr2 = malloc(new_size);
        if (ptr2 == NULL)
            return (NULL);
        return (ptr2);
    }

}
