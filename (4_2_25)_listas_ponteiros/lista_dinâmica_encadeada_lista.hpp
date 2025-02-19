struct no {
    char  dado; 
    no *prox; //eh um ponteiro
};

struct Lista {
  no *inicio;
  no *fim; 
  
};

void cria(Lista*); //em sala
int tamanho(Lista*); //em sala
bool estaVazia(Lista *); //em sala
void imprimir(Lista *); //em sala
int esta_na_lista(Lista*,char); //dever de casa
void inserirInicio (Lista *, char ); //em sala
void inserirFim(Lista *, char ); //em sala
void inserirPosicao (Lista *, char, int); //dever de casa/feito
void removerInicio(Lista *); //em sala/refeito
void removerFim(Lista *); //em sala/refeito
void removerPosicao(Lista *, int pos); //extra/feito
void removerElemento(Lista *, char); //dever de casa/feito

//void finaliza(Lista*);
