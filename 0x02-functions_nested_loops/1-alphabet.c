#include <stdio.h>
#include "main.h"

/**
 * void - print alphabet in lowercase
 *
 * desc : void
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
