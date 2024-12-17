//arredondamento usando casting

#include <iostream>
using namespace std;

int paraCima(float n){
    return int(n) + 1; //int(float n) reduz n ao último inteiro
}                      //soma-se mais um para pular para o próximo
int paraBaixo(float n){
    return int(n);
}
int convencional(float n){
    if(n - int(n) < 0.5)    //float(n) - int(n) extrai a parte decimal
        return int(n);
      //return paraBaixo(n);  
    else
        return int(n) + 1;
      //return paraCima(n);  
}

int main(){
    float nume;

    cout<<"Digite um numero"<<endl;
    cin>>nume;

    cout<<"Arredondado para cima: "<<paraCima(nume)<<endl;
    cout<<"Arredondado para baixo: "<<paraBaixo(nume)<<endl;
    cout<<"Arredondado convencional: "<<convencional(nume)<<endl;
}

