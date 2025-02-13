struct no {
      char  dado; 
      no *prox; //eh um ponteiro
};

struct Lista {
	no *inicio;
	no *fim; 
	
};

void cria(Lista*);
int tamanho(Lista*);
void inserirInicio (Lista *, char );
void inserirPosicao (Lista *, char, char);
void imprimir(Lista *);
void inserirFim(Lista *, char );
bool estaVazia(Lista *);
void remover(Lista *, char);
int esta_na_lista(Lista*,char);
//void finaliza(Lista*);

