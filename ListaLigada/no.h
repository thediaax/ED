#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int info;
    struct no * proximo;
}t_no;

t_no * constroi_no (int i){
    t_no * novo = (t_no *) malloc (sizeof(t_no));
    if(novo != NULL){
    
    novo-> info = i;
    novo-> proximo;
    }
} 
t_no * constroi_no (int);


