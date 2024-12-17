//arredondamento usando casting

#include <iostream>
using namespace std;

int paraCima(float n){
    return int(n) + 1;
}
int paraBaixo(float n){
    return int(n);
}
int convencional(float n){
    if(n - int(n) < 0.5)
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

