#include <iostream>
using namespace std;

struct no {
    char valor;
    no *prox;
    };

struct Fila {
    no *inicio, *fim;
    };

//observe que a fila é manipulada sempre pelo ponteiro nos cabeçalhos abaixo
void cria_fila(Fila *); //usa um ponteiro (endereco indicado pelo *) para a fila
bool enfileirar(Fila *, char );
void imprimir(Fila *);
bool esta_vazia (Fila *);
int tamanho(Fila *);
bool sair(Fila *, char &); //devolve no char o valor removido
