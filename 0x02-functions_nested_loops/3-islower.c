#include <stdio.h>
#include "main.h"
#include "ctype.h"

/**
* _islower - lowercase character
* @c: lowercase character
*
* Description : character to be checked
* Return: 1 or 0
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
