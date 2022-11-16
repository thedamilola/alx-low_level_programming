#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array to search in
  * @size: size of the array
  * @cmp: pointer to the coparing values
  *
  * Return: index of the first element for which the 
  * cmp function does not return 0, or-1 if no element matches
  * or size is negative
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
