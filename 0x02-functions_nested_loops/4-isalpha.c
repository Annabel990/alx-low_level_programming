#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check alphabet character
 * @c: upper and lowercase
 * Description : check character
 * Return : 1  or 0
 */
int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
