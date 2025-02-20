#include <iostream>
#include "lista.hpp"
using namespace std;

int main (){

    //bloco de declaração e criação
    Lista minha_lista;
    cria(&minha_lista);

    //bloco de inserção
    inserirInicio(&minha_lista, 'A');
    inserirInicio(&minha_lista, 'B');
    inserirInicio(&minha_lista, 'C');
    inserirFim(&minha_lista, 'Z');
    inserirFim(&minha_lista, 'W');
    inserirPosicao(&minha_lista, 'H', 1);

    //bloco de impressão
    imprimir(&minha_lista);
    cout<<tamanho(&minha_lista)<<endl;

    //bloco de remoção
    removerInicio(&minha_lista);
    removerFim(&minha_lista);
    removerPosicao(&minha_lista, 2);
    removerElemento(&minha_lista, 'A');

    imprimir(&minha_lista);
    cout<<tamanho(&minha_lista)<<endl;
    
    //bloco lógico
    cout<<esta_na_lista(&minha_lista, 'H')<<endl;    
    cout<<estaVazia(&minha_lista)<<endl;

    return 0;
}
