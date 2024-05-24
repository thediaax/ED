#include <stdio.h>

int fibonacci(int n){
    //printf("n= %d\n", n);
    if(n<=1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int fatorial(int n){
    //printf("n= %d\n", n);
    if(n<=1)
        return 1;
    return n * fatorial(n-1);
}
int soma_1_a_n (int n){
    if (n>0) return n+soma_1_a_n(n-1);
    return 0;
}
int potencia (int k, int n){
    if (n > 0) return k * potencia(k, n-1);
    return 1;
}
int multiplicacao(int n1, int n2){
    if (n1 == 1)
        return n2;
    return n2 + multiplicacao(n1 -1, n2);
}
void exibe_em_pilha(int n, int v[]){
    if(n > 0){
        exibe_em_pilha(n-1, v);
    }
printf("%d ", v[n]);
}
void exibe_em_lista(int n, int v[]){
    if(n >= 0){
        printf("%d ", v[n]);
        exibe_em_lista(n-1, v);
    }
}

int main(){
    // for (int i = 0; i <= 12; i++){
    //     printf("Fatorial de %d = %d\n", i, fatorial(i));
    // }
    // for (int i = 2; i <= 12; i++){
    //     printf("Fibonacci na posicao %d = %d\n", i, fibonacci(i));
    // }
    // printf("\nsoma 1 a 10: %d\n", soma_1_a_n(10));

    printf(" 2^4 = %d\n", potencia(2, 4));
    printf (" 5 x 4 = %d\n", multiplicacao(5, 4));
    int v[5] = {1, 4, 3, 4, 5};
    printf("teste 1:\n");
    exibe_em_pilha(4, v);
    printf("\nteste 2:\n");
    exibe_em_lista(4, v);



    return 0;
}