#include <stdio.h>

int fatorial(int n){
    printf("n= %d\n", n);
    if(n<=1)
        return 1;
    return n * fatorial(n-1);
}

int main(){
    printf("fatorial de 5 = %d\n", fatorial(5));
    return 0;
}