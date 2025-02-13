#include <iostream>
#include "lista.hpp"
using namespace std;

int main (){
    Lista minha_lista;
    cria(&minha_lista);
    inserirInicio(&minha_lista, 'A');
    inserirInicio(&minha_lista, 'B');
    inserirInicio(&minha_lista, 'C');
    imprimir(&minha_lista);
    cout<<tamanho(&minha_lista)<<endl;

    return 0;
}
