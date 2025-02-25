#include <iostream>
#include "pilha_encadeada.hpp"
using namespace std;

void cria(Pilha *minhaPilha){
    minhaPilha->topo = NULL;
}

void empilha(Pilha *minhaPilha, char dado){
    no *novo = new no; //alocacao dinamica
    novo->valor = dado;
    
    if(minhaPilha->topo == NULL){
        novo->prox = NULL;
    } else {
        novo->prox = minhaPilha->topo;
    }
    minhaPilha->topo = novo;
}

void imprimir(Pilha *minhaPilha){

    no *aux;
    aux = minhaPilha->topo;

    while(aux != NULL){
        cout<<aux->valor<<endl;
        aux = aux->prox;
    }
}
                                                 //'&' afirma que a alteração realizada em uma variável dentro de um módulo
void desempilha(Pilha *minhaPilha, char &sair){  //ocorrerá não em uma cópia criada para o módulo, mas sim no endereço da própria variável original
    no *aux = minhaPilha->topo;                  //logo é possível obter seu valor alterado após passagem pelo módulo
    sair = aux->valor;
    minhaPilha->topo = aux->prox;
    delete aux;

}

int main(){
    Pilha minhaPilha;
    cria(&minhaPilha);
    empilha(&minhaPilha, 'B');
    empilha(&minhaPilha, 'S');
    empilha(&minhaPilha, 'N');
    imprimir(&minhaPilha);
    char saiu;
    desempilha(&minhaPilha, saiu);
    cout<<"Quem saiu "<<saiu<<endl;
    imprimir(&minhaPilha);
}



//void empilha(Pilha *, char);
//char verTopo(Pilha);
//void desempilha(Pilha *, char &); //retorna no char o elemento
//void imprimirPilha(Pilha *);
//void concatenar(Pilha *, Pilha *); //tarefa de casa
