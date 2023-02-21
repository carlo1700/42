
#include <stdio.h>

int ft_isdigit(int a){
    int	x;
	x = 0;
    if(a >= 48 && a <= 57){
        x = 1;
    }
    return x;
}



int main(){
    int x = ft_isdigit('c');
    printf("%d", x);
}
