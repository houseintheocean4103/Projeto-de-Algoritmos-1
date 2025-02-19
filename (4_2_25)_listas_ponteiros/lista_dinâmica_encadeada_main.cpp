#include <iostream>
#include "lista.hpp"
using namespace std;

int main (){
    Lista minha_lista;
    cria(&minha_lista);

    inserirInicio(&minha_lista, 'A');
    inserirInicio(&minha_lista, 'B');
    inserirInicio(&minha_lista, 'C');
    inserirFim(&minha_lista, 'Z');
    inserirFim(&minha_lista, 'W');
    inserirPosicao(&minha_lista, 'H', 1);
    imprimir(&minha_lista);
    cout<<tamanho(&minha_lista)<<endl;
    
    
    cout<<estaVazia(&minha_lista)<<endl;
    //removerInicio(&minha_lista);
    //removerFim(&minha_lista);
    //removerPosicao(&minha_lista, 2);
    //removerElemento(&minha_lista, 'A');
    //imprimir(&minha_lista);
    
    //cout<<tamanho(&minha_lista)<<endl;

    cout<<esta_na_lista(&minha_lista, 'H')<<endl;

    return 0;
}
