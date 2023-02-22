#include <stdio.h>
#include "main.h"

/**
 * void prin_alphabet
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
