#include <iostream>

using namespace std;

int main(){
    //int valor, qtdn, soma, npos, nneg
    float ma, ppos, pneg, valor, qtdn, soma, npos, nneg;
    //não é possível operacionar float e int; passar tudo para float
    soma = 0;
    qtdn = 0;
    npos = 0;
    nneg = 0;

    cout<<"Digite valores('0' para finalizar lista): "<<endl;
    cin>>valor;

    while(valor != 0){
        if (valor > 0){
            npos = npos + 1;
        }
        if (valor < 0){
            nneg = nneg + 1;
        }
        soma = soma + valor;
        cin>>valor;
        qtdn = qtdn + 1;
        
    }
    ma = soma/qtdn;
    ppos = 100*(npos/qtdn);
    pneg = 100*(nneg/qtdn);

    cout<<"Soma: "<<soma<<" e quantidade de numeros: "<<qtdn<<endl;
    cout<<"Media aritmetica: "<<ma<<endl;
    cout<<"Numero de positivos: "<<npos<<endl;
    cout<<"Numero de negativos: "<<nneg<<endl;
    cout<<"Porcentagem de positivos: "<<ppos<<"%"<<endl;
    cout<<"Porcentagem de negativos: "<<pneg<<"%"<<endl;

}