#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- make alphabet
 *
 * Description : printing lowercase
 */
void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
}
