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

    int cont_odd = 0, cont_even = 0, tirar;

    cria_pilha(&teste);

    for(int i = 0; i < 15; i++){        
        if(i % 4 == 0 and i % 6 == 0){
            empilhar(&teste, i);
        } 
        if(i % 3 == 0 and not (i % 4 == 0 and i % 6 == 0)){
            desempilhar(&teste, tirar);
        }
    }

    imprimir(&teste);
}

//finalizar
