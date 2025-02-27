#include <iostream>
#include "pilha_encadeada.hpp"
using namespace std;

void cria(Pilha *minhaPilha){ 
    minhaPilha->topo = NULL;   //cria ao atribuir ao topo NULL
}

void empilha(Pilha *minhaPilha, char dado){
    no *novo = new no; //alocacao dinamica
    novo->valor = dado; //recebe a entrada
    
    if(minhaPilha->topo == NULL){
        novo->prox = NULL; //em caso de pilha vazia, o novo nó passa a apontar para NULL
    } else {
        novo->prox = minhaPilha->topo; //senão, passa a apontar para o antigo topo
    }
    minhaPilha->topo = novo; //em ambos os casos, o marcador topo deve apontar para o novo nó
}

void to_bin(Pilha *minhaPilha, int num){

    int resto;

    while(num > 0){
        resto = num%2;
        num = num/2;
        //cout<<resto<<endl;
        empilha(minhaPilha, resto);
    }

}

void imprimir(Pilha *minhaPilha){

    no *aux; //nó auxiliar
    aux = minhaPilha->topo; //começa com o topo

    while(aux != NULL){ //enquanto houverem nós
        cout<<aux->valor<<endl; //imprime na tela o valor de cada
        aux = aux->prox; //e avança para o próximo
    }
}

int main(){
    int n;

    cout<<"Digite o valor para conversão"<<endl;
    cin>>n;

    Pilha bins;
    cria(&bins);

    to_bin(&bins, n);
    imprimir(&bins);

}
