#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

//Inserir No início
void inserir_no_inicio(No **lista, int num){
    No *novo = (No*) malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = *lista;
        *lista = novo;
    }else
        printf("erro ao alocar memoria!\n");

}

void inserir_no_fim(No **lista, int num){
    No *aux,*novo = (No*) malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        
        //é o primeiro?
        if(*lista == NULL)
            *lista = novo;
        else{
            aux = *lista;
            while (aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }else
        printf("erro ao alocar memoria!\n");

}

int main(){

    return 0;
}
