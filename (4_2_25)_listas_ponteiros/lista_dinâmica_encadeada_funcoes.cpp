#include <iostream>
#include "lista.hpp" 
using namespace std;

void cria (Lista *L){
    L->inicio = NULL; //ponteiros para marcar os elementos início e final da lista
    L->fim = NULL;    //declarados
}

int tamanho(Lista *L){
    no* aux;      //declara ponteiro auxiliar para manipular elementos
    int cont = 0;
    aux=L->inicio;
    while (aux != NULL){ //enquanto aux não chegar no último elemento(apontar para NULL)
        cont++;          //incrementa 'cont'
        aux = aux->prox; //atribui-se a 'aux' o valor apontado por ela
    }
    return cont; //ao final 'cont' deve equivaler ao número de elementos
}

void imprimir(Lista *L){

    no *aux;
    aux=L->inicio;
    while (aux != NULL){
        cout<<aux->dado<<endl; //para cada iteração imprime o valor armazenado no campo 'dado' do elemento
        aux = aux->prox;
    }
}

bool estaVazia(Lista *L){

    if(L->inicio==NULL) //basta checar se 'inicio' está vazio
        return true; //1 
    return false; //0

}

int esta_na_lista(Lista *L, char info){

    int exist = 0; //valor permanecerá se o teste falhar, ou seja, nada foi encontrado 
    no *aux;
    aux=L->inicio;

    while(aux != NULL){        
        if(aux->dado == info){ //se o valor for achado, altera 'exist' para 1
            exist = 1;         
        }
        aux = aux->prox;
    }
    return exist; //retorna resposta relativa às saídas booleanas
}   

void inserirInicio(Lista *L, char info){
    //criar o nó
    no *novo = new no; //aloca espaço para o novo elemento(objeto)
    novo->dado = info; //recebe no campo 'dado' o valor

    if (L->inicio == NULL){ //se lista vazia
        novo->prox = NULL;  //por ser o único também é o final, então deve apontar para NULL
        L->inicio = novo;   //'inicio' aponta para 'novo'
        L->fim = novo;      //'fim' aponta para 'novo'
    } else {
        novo->prox=L->inicio; //novo passa a apontar para o antigo elemento de 'inicio'
        L->inicio=novo;       //e o marcador'inicio' passa apontar para o 'novo'
    }
}

void inserirFim(Lista *L, char info){

    no *novo = new no; //cria movo nó
    novo->dado = info;

    novo->prox=NULL; //o novo nó deve apontar para NULL
    L->fim->prox=novo; //o nó apontado por 'fim' passa a apontar para 'novo'
    L->fim=novo; //'fim' passa apontar para novo 

}

void inserirPosicao(Lista *L, char info, int pos){

    no *novo = new no; //cria nó
    novo->dado=info;

    if(pos == 0){ //insere no inicio chamando a função

        inserirInicio(L, info);

    } else if(pos == tamanho(L) - 1){

        inserirFim(L, info); //insere no fim chamando a outra função

    } else {

        no *aux;
        int cont = 0;

        aux=L->inicio;

        while(cont != pos){ //encontra o nó daquela posição
            aux=aux->prox;
            cont++;
        }
        novo->prox=aux->prox; //'novo' passa a apontar para onde o antigo nó apontava
        aux->prox=novo; //o antigo nó passa a apontar para 'novo'
    }
}

void removerInicio(Lista *L){

    L->inicio = L->inicio->prox; //'inicio' passa a apontar para o endereço que o nó apontado em 'inicio' aponta

}

void removerFim(Lista *L){
    
    no *aux, *aux_ant; //declara dois auxiliares
    aux = L->inicio;
    int cont = 0;

    while(cont != tamanho(L) - 1){ //loop até a última posição para evitar NULL
        aux_ant = aux;   //guarda o valor da última iteração(penúltimo elemento)
        aux = aux->prox; //muda de nó( para no último elemento)
        cont++;
    }

    aux_ant->prox=NULL; //penúltimo passa a apontar para NULL
    L->fim=aux_ant;     //'fim' passa a apontar para o penúltimo, tornando-o o último
}

void removerElemento(Lista *L, char info){

    no *aux = L->inicio;
    no *aux_ant;
    
    while(aux->dado != info){ //compara os campos 'dado' do nó
        aux_ant = aux;   //guarda o valor da última iteração(penúltimo elemento)
        aux = aux->prox; //muda de nó(para no elemento solicitado)
    }

    aux_ant->prox=aux->prox; //'aux_ant' passa a apontar para o endereço que o nó solicitado apontava
    aux->prox=NULL;          //o nó solicitado passa a apontar para NULL

}

void removerPosicao(Lista *L, int pos){

    no *aux, *aux_ant;
    int cont = 0;

    aux=L->inicio;

    if(pos == 0){

        removerInicio(L); //aplica a função

    } else if(pos == tamanho(L) - 1){

        removerFim(L); //aplica a função

    } else {

        while(cont != pos){
            aux_ant = aux; //guarda o valor da última iteração(penúltimo elemento)
            aux=aux->prox; //muda de nó(para no elemento da posição solicitada)
            cont++;
        }
        aux_ant->prox=aux->prox; //'aux_ant' passa a apontar para o endereço que o nó da posição solicitada apontava
        aux->prox=NULL; //o nó da posição solicitada passa a apontar para NULL
    }
}
