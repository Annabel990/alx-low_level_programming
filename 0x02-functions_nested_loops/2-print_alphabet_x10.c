#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - make 10 alphabet
 *
 * Description : print 10 alphabet
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');

		i++;
	}
}
