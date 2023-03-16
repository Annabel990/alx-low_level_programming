#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to malloc
 * Return: pointer to allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void* ptr = malloc(b);

	if(ptr == null)
	{
		exist(96);
	
	}

	return ptr;
}
