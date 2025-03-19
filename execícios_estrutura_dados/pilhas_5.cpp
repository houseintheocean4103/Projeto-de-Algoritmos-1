#include <iostream>
#include "pilhas.hpp"
using namespace std;

void cria_pilha( Pilha *minhapilha){
    minhapilha->topo = NULL;
}

void empilhar( Pilha *minhapilha, int dado){

    no *novo = new no;
    novo->valor = dado;

    if(minhapilha->topo == NULL){
        novo->prox = NULL;
    } else {
        novo->prox = minhapilha->topo;
    }
    minhapilha->topo = novo;
}

void imprimir( Pilha *minhapilha){

    no *aux = minhapilha->topo;

    while(aux != NULL){
        cout<<aux->valor<<endl;
        aux = aux->prox;
    }
}

void desempilhar( Pilha *minhapilha, int &sair){

    no *aux = minhapilha->topo;
    sair = aux->valor;
    minhapilha->topo = aux->prox;
    delete aux;

}

int main(){

    Pilha teste;

    cria_pilha(&teste);

    for(int i = 1; i < 11; i++){
        empilhar(&teste, - i);
    }

    int saida, prod;

    for(int i = 1; i < 11; i++){
        desempilhar(&teste, saida);
        prod = saida * prod;
    }
    cout<<prod;
}
