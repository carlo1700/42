#include <stdio.h>

int ft_isalnum (int a){
	int x;

	x = 0;
	if( (a >= 48 && a <= 57) || (a >= 65 && a <= 90 || a >= 97 && a <= 122) )
	{
		x = 1;
	}
	return (x);
}
