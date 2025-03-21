#include <iostream>
#include "pilhas.hpp"
using namespace std;

void cria_pilha(Pilha *minhapilha){
    minhapilha->topo = NULL;
}

void empilhar(Pilha *minhapilha, char dado){
    no *novo = new no;
    novo->valor = dado;

    if(minhapilha->topo == NULL){
        novo->prox = NULL;
    } else {
        minhapilha->topo->prox = novo;
    }
    minhapilha->topo = novo;
}

void vogais(Pilha *minhapilha) 
