#include <iostream>
using namespace std;

struct no {
    char valor;
    no *prox;
};

struct Pilha {
    no *topo;
};

void cria_pilha(Pilha *);
void empilhar(Pilha *, char);
void imprimir(Pilha *);
void desempilhar(Pilha *, char &);
void topo(Pilha *);
void concatenar(Pilha *, Pilha *);
