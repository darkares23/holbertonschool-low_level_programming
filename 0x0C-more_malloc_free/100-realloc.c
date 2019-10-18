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
	void *r_ptr;

	if (ptr == NULL)
	{
		r_ptr = malloc(new_size);
		if (r_ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (r_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	r_ptr = malloc(new_size);
	if (r_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(r_ptr, ptr, old_size);
	free(ptr);
	return (r_ptr);
}

/**
 * _memcpy - copies n bytes form the memory area src
 * to memory area dest
 * @src:
 * @dest:
 * @n:  bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
