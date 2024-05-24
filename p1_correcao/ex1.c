#include <stdio.h>
#include <stdlib.h>

//ex1
void vetor_lista(int v[], int t, lista *l){
    for(int i=0; i<t; i++){
        insere_fim(v[i], lista);
    }
}
// ex3

int soma_inteiros(int i, int tam, int v[]){
    if(i<tam)
        return v[i] +soma_inteiros(i+1, tam, v);
    return 0;
    
}

int main(){
    int v[3] = {4, 7, 8};
    printf("%d\n ", soma_inteiros(0, 3, v));
    
    return 0;

}

//para que serve o const em c
