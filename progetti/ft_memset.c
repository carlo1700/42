#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *s1;

	s1 = s;
	while( n-- != 0 )
	{

		*s1++ = c;
	}
	return (s);
}
