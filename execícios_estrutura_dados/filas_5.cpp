#include <iostream>
#include "filas.hpp"
using namespace std;

void cria_fila(Fila *minhafila){
    minhafila->inicio = NULL;
    minhafila->fim = NULL;
}

bool esta_vazia(Fila *minhafila){

    if(minhafila->inicio == NULL){
        return true;
    }
    return false;
}

bool enfileirar(Fila *minhafila, int dado){

    no *novo = new no;
    novo->valor = dado;
    novo->prox = NULL;

    if(esta_vazia(minhafila)){
        minhafila->inicio = novo;
        minhafila->fim = novo;
        return true;
    } else {
        minhafila->fim->prox = novo;
        minhafila->fim = novo;
        return true;
    }
    return false;
}

void imprimir(Fila *minhafila){

    if(not esta_vazia(minhafila)){
        no *aux = minhafila->inicio;

        while(aux != NULL){
            cout<<aux->valor<<endl;
            aux = aux->prox;
        }
    } else {
        cout<<"Está vazia"<<endl;
    }
}

int tamanho(Fila *minhafila){

    no *aux = minhafila->inicio;
    int cont = 0;

    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

bool sair(Fila *minhafila, char &saida){

    if(not esta_vazia(minhafila)){
        saida = minhafila->inicio->valor;
        minhafila->inicio = minhafila->inicio->prox;
    } else {
        cout<<"Esta vazia."<<endl;
    }
}


void crescente(Fila *minhafila){

    if(not esta_vazia(minhafila)){
        no *aux = minhafila->inicio;
        int maior = aux->valor, cont = 0;

        while(aux->prox != NULL and aux->prox->valor > maior){           
            maior = aux->prox->valor;            
            aux = aux->prox;
        }
        if(aux->prox == NULL){
            cout<<"A fila esta em ordem crescente"<<endl;
        } else {
            cout<<"A fila nao esta em ordem crescente"<<endl;
        }
    } else {
        cout<<"Está vazia"<<endl;
    }
}

int main(){

    Fila teste;
    char saiu;

    cria_fila(&teste);

    //enfileirar(&teste, 8);

    for(int i = 0;i < 6;i++){
        enfileirar(&teste, i);
    }

    //sair(&teste, saiu);

    imprimir(&teste);
    
    //cout<<tamanho(&teste)<<endl;

    //cout<<saiu<<endl;

    crescente(&teste);
}
