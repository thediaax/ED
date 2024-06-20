#include "abb.h"

void inicializa_abb (t_abb *a) {
    a->raiz = NULL;
}

int esta_vazia (t_abb *a) {
    return (a->raiz == NULL);
}

void insere_rec (t_no *novo, t_no *atual) {
    if (novo->info <= atual->info) { //vai pra esquerda
        if (atual->esq == NULL) { //gancgo da esquerda está livre
            atual->esq = novo;
        }
        else { //continua procurando
            insere_rec (novo, atual->esq);
        }
    }
    else { //vai pra direita
        if (atual->dir == NULL) {
            atual->dir = novo;
        }
        else {
            insere_rec (novo, atual->dir);
        }
    }
}

void insere (int i, t_abb *a) {
    t_no *novo = constroi_no(i);
    if (esta_vazia(a)) {
        a->raiz = novo;
    }
    else {
        insere_rec (novo, a->raiz);
    }
}

void exibe_em_ordem_rec (t_no * atual) {
    if (atual != NULL) {
        exibe_em_ordem_rec (atual->esq);
        mostra_no(atual);
        exibe_em_ordem_rec (atual->dir);
    }
}

void exibe_em_ordem (t_abb *a) {
    if (esta_vazia (a)) {
        printf ("Arvore vazia");
    }
    else {
        exibe_em_ordem_rec (a->raiz);
    }
}

int o_maior(t_abb * a){
    if(esta_vazia(a)) return 1;
    t_no * atual = a->raiz;
    while (atual->dir != NULL)
        atual = atual->dir;
    return atual->info;
}
void exibe_em_pre_ordem_rec(t_no * atual){
    if(atual != NULL){
        mostra_no(atual);
        exibe_em_ordem_rec(atual->esq);
        exibe_em_ordem_rec(atual->dir);
        
    }
}
void exibe_em_pre_ordem(t_abb *a){
    if(esta_vazia(a))
        printf("arvore vazia");
    else
        exibe_em_pre_ordem_rec(a->raiz);
}
//escreva uma função que escreva a altura de uma arvore binaria
int altura_rec(t_no *atual){
    if(atual->esq == NULL && atual->dir == NULL)//folha
        return 0;
    int nivel_esq = 0, nivel_dir = 0;
    if(atual->esq !=NULL)
        nivel_esq = altura_rec(atual->esq);
    if(atual->dir != NULL)
        nivel_esq = altura_rec(atual->dir);
    if(nivel_dir > nivel_esq)
        return nivel_dir +1;
    else 
        return nivel_esq +1;

    // return nivel_esq > nivel_dir ? nivel_dir+1: nivel_esq+1;
    }
    
int altura(t_abb *a){

    if(esta_vazia(a))
        return 0;
    return altura_rec(a->raiz);
}

