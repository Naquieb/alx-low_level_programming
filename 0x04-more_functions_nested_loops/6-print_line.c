#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line specified length using underscore character
 *
 * @n: length of the line to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			putchar(' ');
		}
		putchar('\n');
	}
}


