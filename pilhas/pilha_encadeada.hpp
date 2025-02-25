//implementacao encadeada e dinâmica
struct no {
	char valor;
	no *prox;
};

struct Pilha {
	no *topo;
	
};
void cria(Pilha *);
void empilha (Pilha *, char) ;
char verTopo (Pilha );
void desempilha(Pilha *, char &); //retorna no char o elemento que saiu
void imprimirPilha (Pilha *);
void concatenar (Pilha *, Pilha *); //tarefa de casa
