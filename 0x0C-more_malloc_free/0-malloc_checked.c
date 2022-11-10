#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: to be allocated
 * Return: 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
