//decompõe um valor em notas de real

#include <iostream>

using namespace std;

int main(){
    
    
    int valor, resto, cem, cinquenta, dez, cinco, dois, um;

    cout<<"Digite um valor: ";
    cin>>valor;

    resto = valor%100;
    cem = valor/100;
    cinquenta = resto/50;
    resto = resto%50;
    dez = resto/10;
    resto = resto%10;
    cinco = resto/5;
    resto = resto%5;
    dois = resto/2;   
    resto = resto%2;   
    um = resto;

    cout<<"100:"<<cem<<endl<<"50:"<<cinquenta<<endl<<"10:"<<dez<<endl<<"5:"<<cinco<<endl<<"2:"<<dois<<endl<<"1:"<<um;
    
}
