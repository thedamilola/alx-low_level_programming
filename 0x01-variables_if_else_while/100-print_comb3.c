#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int one = '0';
	int ten = '0';

	for (ten = '0'; ten <= '9'; ten++)/* prints ten digit*/
	{
		for (one = '0'; one <= '9'; one++)/* prints one digit*/
		{
			if (!((one == ten) || (ten > one)))/*eliminates repetition*/
			{
				putchar(ten);
				putchar(one);
				if (!(one == '9' && ten == '8'))/*adds comman and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
