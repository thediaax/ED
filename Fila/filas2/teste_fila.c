#include <time.h>
#include "fila.h"

int main(){
    t_fila fila;

    inicia_fila(&fila);
    srand(time(0));
    do{
        if(rand() % 2){
            enfileira(rand() % 10, &fila);
        }
        else{
            if(!esta_vazia(&fila));
            printf("%d foi atendido\n", desenfileira(&fila));
        }
        mostra_fila(&fila);
    } while(!esta_vazia(&fila));
        {

        }

    return 0;
}