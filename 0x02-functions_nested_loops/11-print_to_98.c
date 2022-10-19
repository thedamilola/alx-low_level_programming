#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * separated by a comma followed by a space and printed in order.
 * @n: The number to begin from.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n);
	}

	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}
