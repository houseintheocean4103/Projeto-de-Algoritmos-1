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
        novo->prox = minhapilha->topo;
    }
    minhapilha->topo = novo;
}

bool vogais(char letra){
    
    string vog = "aeiouAEIOU";

    for(int i = 0;i < 10;i++)
        if(letra == vog[i]){
            return true;
        }
    return false;
} 

void imprimir(Pilha *minhapilha){

    no *aux = minhapilha->topo;
    int i = 0;

    while(aux != NULL){
        if(vogais(aux->valor)){
            cout<<i<<endl;
        }
        i++;
        aux = aux->prox;
    }
}

int main(){

    Pilha teste;
    string palavra = "guardanapo";

    cria_pilha(&teste);

    for(int i = palavra.size() - 1;i >= 0;i--){
        empilhar(&teste, palavra[i]);
    }

    imprimir(&teste);

    

}


