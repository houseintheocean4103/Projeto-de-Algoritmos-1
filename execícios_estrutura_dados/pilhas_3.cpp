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
    int tirar, vetor[5];

    for(int j = 0; j < 5; j++){
        cin>>vetor[j];
    }

    cria_pilha(&teste);

    for(int i = 0; i < 5; i++){        
        if(vetor[i] % 12 == 0){
            empilhar(&teste, vetor[i]);
        } 
        if(vetor[i] % 3 == 0 and vetor[i] % 12 != 0){
            desempilhar(&teste, tirar);
            empilhar(&teste, vetor[i]);
        }
    }
    cout<<"\n"<<"Apos processamento: "<<endl;
    imprimir(&teste);
}

//finalizar
