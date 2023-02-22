#include <stdio.h>
#include "main.h"
#include "ctype.h"

/**
* int _islower(int c)- print lowercase character
*
* Description : return 1 and 0
*/
 
int _islower(int c)
{
	if (islower(c))
	{
	 return (1);
	}
       	else{
		return(0);
	}
}
