#include <iostream>
#include "lista.hpp"
using namespace std;

void cria (Lista *L){
    L->inicio = NULL;
    L->fim = NULL;
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
void imprimir(Lista *L){
    no* aux;
    aux=L->inicio;
    while (aux != NULL){
        cout<<aux->dado<<endl;
        aux = aux->prox;
    }
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

