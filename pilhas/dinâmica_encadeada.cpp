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

void imprimir(Pilha *minhaPilha){

    no *aux; //nó auxiliar
    aux = minhaPilha->topo; //começa com o topo

    while(aux != NULL){ //enquanto houverem nós
        cout<<aux->valor<<endl; //imprime na tela o valor de cada
        aux = aux->prox; //e avança para o próximo
    }
}
                                                 //'&' afirma que a alteração realizada em uma variável dentro de um módulo
void desempilha(Pilha *minhaPilha, char &sair){  //ocorrerá não em uma cópia criada para o módulo, mas sim no endereço da própria variável original
    no *aux = minhaPilha->topo;                  //logo é possível obter seu valor alterado após passagem pelo módulo
    sair = aux->valor; //recebe o 'valor' do topo
    minhaPilha->topo = aux->prox; //topo passa a ser o próximo nó da pilha
    delete aux; //deleta auxiliar

}

void concatenar(Pilha *minhaPilha, Pilha *pilha2){
    no *aux;
    aux = minhaPilha->topo;

    while(aux->prox != NULL){ //atravessa os nós até chegar no chão
        aux = aux->prox;
    }
    aux->prox = pilha2->topo; //o chão passa a apontar para o topo da outra pilha, em vez de NULL
    delete pilha2->topo; //deleta o marcador de topo da outra pilha

    //pilha2->topo = minhaPilha->topo; //faz com que ambos os topos apontem para a pilha concatenada, dessa forma ambos podem ser usados para referenciá-la
}

int main(){
    Pilha minhaPilha;
    cria(&minhaPilha);

    Pilha pilha2;
    cria(&pilha2);

    empilha(&minhaPilha, 'B');
    empilha(&minhaPilha, 'S');
    empilha(&minhaPilha, 'N');
    //imprimir(&minhaPilha);
    //char saiu;
    //desempilha(&minhaPilha, saiu);
    //cout<<"Quem saiu "<<saiu<<endl;
    //imprimir(&minhaPilha);
    empilha(&pilha2, 'D');
    empilha(&pilha2, 'E');
    empilha(&pilha2, 'F');

    concatenar(&minhaPilha, &pilha2);
    //imprimir(&pilha2);
    imprimir(&minhaPilha);
    //imprimir(&pilha2);
}

//void empilha(Pilha *, char);
//char verTopo(Pilha);
//void desempilha(Pilha *, char &); //retorna no char o elemento
//void imprimirPilha(Pilha *);
//void concatenar(Pilha *, Pilha *); //tarefa de casa
