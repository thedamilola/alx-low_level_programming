#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;

	a = malloc((size1 + n + 1) * sizeof(char));

	if (a == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		a[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		a[i] = s2[i - size1];
	}
	a[i] = '\0';

return (a);
}
