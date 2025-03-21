#include <iostream>
#include "filas.hpp"
using namespace std;

void cria_fila(Fila *minhafila){
    minhafila->inicio = NULL;
    minhafila->fim = NULL;
}

bool esta_vazia(Fila *minhafila){

    if(minhafila->inicio == NULL){
        return true;
    }
    return false;
}

bool enfileirar(Fila *minhafila, char dado){

    no *novo = new no;
    novo->valor = dado;
    novo->prox = NULL;

    if(esta_vazia(minhafila)){
        minhafila->inicio = novo;
        minhafila->fim = novo;
        return true;
    } else {
        minhafila->fim->prox = novo;
        minhafila->fim = novo;
        return true;
    }
    return false;
}

void imprimir(Fila *minhafila){

    if(not esta_vazia(minhafila)){
        no *aux = minhafila->inicio;

        while(aux != NULL){
            cout<<aux->valor<<endl;
            aux = aux->prox;
        }
    } else {
        cout<<"Está vazia"<<endl;
    }
}

int tamanho(Fila *minhafila){

    no *aux = minhafila->inicio;
    int cont = 0;

    while(aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}

bool sair(Fila *minhafila, char &saida){

    if(not esta_vazia(minhafila)){
        saida = minhafila->inicio->valor;
        minhafila->inicio = minhafila->inicio->prox;
    } else {
        cout<<"Esta vazia."<<endl;
    }
}

int main(){

    Fila teste;
    string palavra = "goiaba";
    char saiu;

    cria_fila(&teste);

    for(int i = 0;i < palavra.size();i++){
        enfileirar(&teste, palavra[i]);
    }

    sair(&teste, saiu);

    imprimir(&teste);
    
    cout<<tamanho(&teste)<<endl;

    cout<<saiu<<endl;
}
