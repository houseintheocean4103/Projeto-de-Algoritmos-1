#include <iostream>
#include "lista.hpp" 
using namespace std;

void cria (Lista *L){
    L->inicio = NULL;
    L->fim = NULL;
}

int tamanho(Lista *L){
    no* aux;
    int cont = 0;
    aux=L->inicio;
    while (aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void imprimir(Lista *L){

    no *aux;
    aux=L->inicio;
    while (aux != NULL){
        cout<<aux->dado<<endl;
        aux = aux->prox;
    }
}

bool estaVazia(Lista *L){

    if(L->inicio==NULL)
        return true; //1
    return false; //0

}

int esta_na_lista(Lista *L, char info){

    int exist = 0;
    no *aux;
    aux=L->inicio;

    while(aux != NULL){        
        if(aux->dado == info){
            exist = 1;                   
        }
        aux = aux->prox;
    }
    return exist;
}   

void inserirInicio(Lista *L, char info){
    //criar o nó
    no *novo = new no;
    novo->dado = info;

    if (L->inicio == NULL){ //se lista vazia
        novo->prox = NULL;
        L->inicio = novo;
        L->fim = novo;
    } else {
        novo->prox=L->inicio;
        L->inicio=novo;
    }
}

void inserirFim(Lista *L, char info){

    no *novo = new no;
    novo->dado = info;

    L->fim->prox=novo;
    novo->prox=NULL;
}

void inserirPosicao(Lista *L, char info, int pos){

    no *novo = new no;
    novo->dado=info;

    if(pos == 0){

        inserirInicio(L, info);

    } else if(pos == tamanho(L) - 1){

        inserirFim(L, info);

    } else {

        no *aux;
        int cont = 0;

        aux=L->inicio;

        while(cont != pos){
            aux=aux->prox;
            cont++;
        }
        novo->prox=aux->prox;
        aux->prox=novo;
    }
}

void removerInicio(Lista *L){

    L->inicio = L->inicio->prox;

}

void removerFim(Lista *L){

    L->fim->prox=NULL;

}

void removerElemento(Lista *L, char info){

    no *aux = L->inicio;
    no *aux_ant;
    
    while(aux->dado != info){
        aux_ant = aux;
        aux = aux->prox;
    }

    aux_ant->prox=aux->prox;
    aux->prox=NULL;

}

void removerPosicao(Lista *L, int pos){

    no *aux, *aux_ant;
    int cont = 0;

    aux=L->inicio;

    while(cont != pos){
        aux_ant = aux;
        aux=aux->prox;
        cont++;
    }
    aux_ant->prox=aux->prox;
    aux->prox=NULL;
}
