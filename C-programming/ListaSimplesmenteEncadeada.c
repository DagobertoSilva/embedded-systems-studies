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

//inserir no meio
void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = (No*) malloc(sizeof(No));

    if (novo){
        novo->valor = num;
        // é o primeiro ?
        if (*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }else{
            aux = *lista;
            while ((aux->proximo != ant) &&(aux->proximo))
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        
    }else
        printf("Erro ao alocar memoria");
    
}

void imprimir(No *no){
    printf("\n\tLista: ");
    while (no)
    {
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){
    int opcao, valor, anterior;
    No *lista = NULL;
    do
    {
        printf("\n\t0 - Sair\n\t1 - Inserir no inicio\n\t2 - Inserir no Fim\n\t3 - Inserir no Meio\n\t4 - Imprimir\n\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            printf("\n\n");
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            printf("\n\n");
            break;
        case 3:
            printf("Digite um valor e o valor de Referencia: ");
            scanf("%d", &valor);
            scanf("%d", &anterior);
            inserir_no_meio(&lista, valor, anterior);
            printf("\n\n");
            break;
        case 4:
            imprimir(lista);
            printf("\n\n");
            break;
        default:
            if (opcao != 0)
                printf("opcao invalida\n");
            printf("\n\n");
            break;
        }
    } while (opcao != 0);
    
    printf("Voce Saiu\n");

    return 0;
}
