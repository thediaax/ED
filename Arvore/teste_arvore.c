#include <time.h>
#include "abb.h"

int main () {
    t_abb a;
    inicializa_abb(&a);
    srand(time(0));
    for (int i = 1; i <= 12; i++) {
          int n = rand() % 100;
          printf ("%d ", n);
          insere(n, &a);
    }
    printf("\n");
    exibe_em_ordem(&a);
    printf("\n");
    printf("o maior eh %d\n", o_maior(&a));
    printf("\n");
    exibe_em_pre_ordem(&a);
    printf("\n");
    printf("altura = %d\n", altura (&a));
    
    return 0;
}
