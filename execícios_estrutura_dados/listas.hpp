#include <iostream>
using namespace std;

struct no{
    int valor;
    no *prox;
};

struct Lista{
    no *inicio, *fim;
};

void cria_lista(Lista *);
bool esta_vazia(Lista *);
void imprimir(Lista *);
int tamanho(Lista *);
bool busca_elemento(Lista *, int);
void inserir_inicio(Lista *, int);
void inserir_fim(Lista *, int);
void inserir_pos(Lista *, int, int);
void remover_inicio(Lista *);
void remover_fim(Lista *);
void remover_pos(Lista *, int);
void remover_elemento(Lista *, int);


