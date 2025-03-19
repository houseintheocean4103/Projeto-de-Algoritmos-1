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

    int cont_odd = 0, cont_even = 0;

    cria_pilha(&teste);

    for(int i = 1; i < 11; i++){
        if(i % 2 == 1){
            cont_odd++;
        } 
        if(i % 2 == 0){
            empilhar(&teste, i);
            cont_even++;
        }
    }

    int saida, soma = 0;

    for(int i = 0; i < cont_even; i++){
        desempilhar(&teste, saida);
        soma = saida + soma;
    }
    cout<<cont_odd<<endl;
    cout<<soma/cont_even;
}
