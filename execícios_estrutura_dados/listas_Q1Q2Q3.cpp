#include <iostream>
#include "listas.hpp"
using namespace std;

void cria_lista(Lista *minhalista){
    minhalista->inicio = NULL;
    minhalista->fim = NULL;
}

bool esta_vazia(Lista *minhalista){
    if(minhalista->inicio == NULL){
        return true;
    }
    return false;
}

void imprimir(Lista *minhalista){

    if(esta_vazia(minhalista)){
        cout<<"Lista vazia"<<endl;
    } else {
        no *aux = minhalista->inicio;

        while(aux != NULL){
            cout<<aux->valor<<endl;
            aux = aux->prox;
        }
    }
}

int tamanho(Lista *minhalista){

    no *aux = minhalista->inicio;
    int cont = 0;

    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void inserir_inicio(Lista *minhalista, int dado){

    no *novo = new no;
    novo->valor = dado;

    if(esta_vazia(minhalista)){
        minhalista->inicio = novo;
        minhalista->fim = novo;
        novo->prox = NULL;
    } else {
        novo->prox = minhalista->inicio;
        minhalista->inicio = novo;
    }
}

void inserir_fim(Lista *minhalista, int dado){

    no *novo = new no;
    novo->valor = dado;

    if(esta_vazia(minhalista)){
        minhalista->inicio = novo;
        minhalista->fim = novo;
        novo->prox = NULL;
    } else {
        minhalista->fim->prox = novo;
        minhalista->fim = novo;
        novo->prox = NULL;
    }
}

void inserir_pos(Lista *minhalista, int dado, int pos){

    no *novo = new no;
    novo->valor = dado;

    no *aux = minhalista->inicio;
    int cont = 0;

    while(cont != pos - 1){
        aux = aux->prox;
        cont++;
    }
    novo->prox = aux->prox;
    aux->prox = novo;

}

void remover_inicio(Lista *minhalista){

    minhalista->inicio = minhalista->inicio->prox;

}

void remover_fim(Lista *minhalista){

    no *aux = minhalista->inicio, *ant_aux;

    while(aux->prox != NULL){
        ant_aux = aux;
        aux = aux->prox;
    }
    ant_aux->prox = NULL;
    minhalista->fim = ant_aux;

}

void remover_pos(Lista *minhalista, int pos){

    no *aux = minhalista->inicio, *ant_aux;
    int cont = 0;

    while(cont != pos){
        ant_aux = aux;
        aux = aux->prox;
        cont++;
    }
    ant_aux->prox = aux->prox;
    aux->prox = NULL;    
}

void remover_elemento(Lista *minhalista, int dado){

    no *aux = minhalista->inicio, *ant_aux;

    while(aux->valor != dado){
        ant_aux = aux;
        aux = aux->prox;
    }
    ant_aux->prox = aux->prox;
    aux->prox = NULL;    
}

int main(){

    Lista teste;

    cria_lista(&teste);

    inserir_inicio(&teste, 2);
    inserir_inicio(&teste, 4);
    inserir_inicio(&teste, 6);
    inserir_fim(&teste, 7);
    inserir_pos(&teste, 10, 2);

    //remover_inicio(&teste);
    //remover_fim(&teste);
    //remover_pos(&teste, 2);
    remover_elemento(&teste, 10);

    imprimir(&teste);
    //cout<<tamanho(&teste);
}

