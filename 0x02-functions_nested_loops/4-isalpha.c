#include <stdio.h>
#include "main.h"
#include <ctype>

/**
 * _isalpha - check alphabet character
 * @c: upper and lowercase
 * Description : uppercase lowercase
 * Return : 1  or 0
 */
int _isalpha(int c)
{
	if (uppercase(c) || lowercase(c))
		return (1);
	else
		return (0);
}
 
 
