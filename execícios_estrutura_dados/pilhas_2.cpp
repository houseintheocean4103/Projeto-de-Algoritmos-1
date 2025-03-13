#include <iostream>
using namespace std;
#include "pilhas.hpp"

void cria_pilha(Pilha *my_pilha){
    my_pilha->topo = NULL;
}

void empilhar(Pilha *my_pilha, char dado){
    no *novo = new no;
    novo->valor = dado;

    if(my_pilha->topo == NULL){
        novo->prox = NULL;
    } else {
        novo->prox = my_pilha->topo;
    }
     my_pilha->topo = novo;
}

void imprimir(Pilha *my_pilha){
    no *aux;

    aux = my_pilha->topo;

    while(aux != NULL){
        cout<<aux->valor;
        aux = aux->prox;       
    }
    cout<<endl;
}

int main(){
    int n;
    Pilha teste;
    string entrada = "Hoje tem aula";
    n = entrada.size();

    cria_pilha(&teste);

    for(int i = 0; i < n;i++){
        empilhar(&teste, entrada[i]);
    }
    
    imprimir(&teste);
}
