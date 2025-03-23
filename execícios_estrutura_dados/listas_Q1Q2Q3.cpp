#include <iostream>
#include "listas.hpp"
using namespace std;

void cria_lista(Lista *minhalista){
    minhalista->inicio = NULL;
    minhalista->fim = NULL;
}

bool esta_vazia(Lista *minhalista){
    if(minhalista->inicio == NULL){
        return true;
    }
    return false;
}

void imprimir(Lista *minhalista){

    if(esta_vazia(minhalista)){
        cout<<"Lista vazia"<<endl;
    } else {
        no *aux = minhalista->inicio;

        while(aux != NULL){
            cout<<aux->valor<<endl;
            aux = aux->prox;
        }
    }
}

int tamanho(Lista *minhalista){

    no *aux = minhalista->inicio;
    int cont = 0;

    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void inserir_inicio(Lista *minhalista, int dado){

    no *novo = new no;
    novo->valor = dado;

    if(esta_vazia(minhalista)){
        minhalista->inicio = novo;
        minhalista->fim = novo;
        novo->prox = NULL;
    } else {
        novo->prox = minhalista->inicio;
        minhalista->inicio = novo;
    }
}

void inserir_fim(Lista *minhalista, int dado){

    no *novo = new no;
    novo->valor = dado;

    if(esta_vazia(minhalista)){
        minhalista->inicio = novo;
        minhalista->fim = novo;
        novo->prox = NULL;
    } else {
        minhalista->fim->prox = novo;
        minhalista->fim = novo;
        novo->prox = NULL;
    }
}

void inserir_pos(Lista *minhalista, int dado, int pos){

    no *novo = new no;
    novo->valor = dado;

    no *aux = minhalista->inicio;
    int cont = 0;

    while(cont != pos - 1){
        aux = aux->prox;
        cont++;
    }
    novo->prox = aux->prox;
    aux->prox = novo;

}

void remover_inicio(Lista *minhalista){

    minhalista->inicio = minhalista->inicio->prox;

}

void remover_fim(Lista *minhalista){

    no *aux = minhalista->inicio, *ant_aux;

    while(aux->prox != NULL){
        ant_aux = aux;
        aux = aux->prox;
    }
    ant_aux->prox = NULL;
    minhalista->fim = ant_aux;

}

void remover_pos(Lista *minhalista, int pos){

    no *aux = minhalista->inicio, *ant_aux;
    int cont = 0;

    while(cont != pos){
        ant_aux = aux;
        aux = aux->prox;
        cont++;
    }
    ant_aux->prox = aux->prox;
    aux->prox = NULL;    
}

void remover_elemento(Lista *minhalista, int dado){

    no *aux = minhalista->inicio, *ant_aux;

    while(aux->valor != dado){
        ant_aux = aux;
        aux = aux->prox;
    }
    ant_aux->prox = aux->prox;
    aux->prox = NULL;    
}

void reverter(Lista *minhalista){

    no *aux = minhalista->inicio, *anterior = NULL, *proximo = NULL;

    while(aux != NULL){
        proximo = aux->prox; //armazena o próximo nó para percorrer a lista
        aux->prox = anterior; //passa a apontar para o 'anterior'

        anterior = aux; //começa em NULL, depois recebe valores já lidos para serem apontados
        aux = proximo; //avança para o próximo nó
    }
    minhalista->fim = minhalista->inicio;
    minhalista->inicio = anterior; //passa a apontar para o último valor de 'anterior', antigo último elemento
}

void unir(Lista *lista1, Lista *lista2){

    lista1->fim->prox = lista2->inicio;
    lista1->fim = lista2->fim;
    lista2->inicio = NULL;
    lista2->fim = NULL;
    delete lista2->inicio, lista2->fim;
}

void maior_menor(Lista *minhalista){

    no *aux = minhalista->inicio;
    int maior = aux->valor, menor = aux->valor;

    while(aux != NULL){

        if(maior < aux->valor){
            maior = aux->valor;
        }
        if(menor > aux->valor){
            menor = aux->valor;
        }
        aux = aux->prox;
    }
    cout<<"O maior valor e: "<<maior<<endl;
    cout<<"O menor valor e: "<<menor<<endl;
}

void excluir(Lista *minhalista){

    no *aux = minhalista->inicio, *proximo;

    while(aux != NULL){
        proximo = aux->prox;
        delete aux;
        aux = proximo;
    }
    minhalista->fim = NULL;
    minhalista->inicio = NULL;
}

void intersecao(Lista *lista1, Lista *lista2, Lista *lista3){

    no *aux1 = lista1->inicio, *aux2 = lista2->inicio;

    while(aux1 != NULL){
        while(aux2 != NULL){        
            if(aux1->valor == aux2->valor){
                inserir_fim(lista3, aux1->valor);
            }
            aux2 = aux2->prox;
        }
        aux1 = aux1->prox;
    }
    if(esta_vazia(lista3)){
        cout<<"Nao havia intersecao: "<<endl;
    }
}

int main(){

    Lista teste;
    Lista teste2;
    Lista teste3;

    cria_lista(&teste);
    cria_lista(&teste2);
    cria_lista(&teste3);


    inserir_inicio(&teste, 2);
    inserir_inicio(&teste, 4);
    inserir_inicio(&teste2, 6);
    //inserir_inicio(&teste2, 4);
    inserir_inicio(&teste2, 10);
    //inserir_fim(&teste, 7);
    //inserir_pos(&teste, 10, 2);

    //remover_inicio(&teste);
    //remover_fim(&teste);
    //remover_pos(&teste, 2);
    //remover_elemento(&teste, 10);

    //reverter(&teste);
    //unir(&teste, &teste2);
    //maior_menor(&teste);
    intersecao(&teste, &teste2, &teste3);

    //excluir(&teste);

    imprimir(&teste3);
    //cout<<tamanho(&teste);
}

