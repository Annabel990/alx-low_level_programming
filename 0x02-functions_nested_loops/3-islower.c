#include <stdio.h>
#include "main.h"
#include "ctype.h"

/**
* islower - lowercase character
* @c - lowercase character
*
* Description : character to be checked
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
       	else
		return (0);
	
}
