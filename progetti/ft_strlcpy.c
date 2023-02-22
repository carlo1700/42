#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	int count;

	count = 0;
	while( size-- != 0 )
	{
		*dest++ = *src++;
		if(*src == '\0'){
			return count;
		}
		count++;
	}
	return (count++);
}

int main (){
	const char* src = "ciao\0\0";
	char* dest = malloc(sizeof(7));
	int x = ft_strlcpy(dest, src, 7);
	printf("%d", x);
	x = strlcpy(dest, src, 7);
	printf("%d", x);

}
