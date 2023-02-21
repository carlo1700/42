#include <stdio.h>

int ft_isalpha(int a){
    int x;
    x = 0;
    if(a >= 65 && a <= 90 || a >= 97 && a <= 122)
    {
        x = 1;
    }
    return x;
}



int main(){
    int x;
    x = ft_isalpha('5');
    printf("%d", x);
}
