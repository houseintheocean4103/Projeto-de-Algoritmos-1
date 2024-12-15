#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int vet[5], i;
    float raiz[5];

    cout<<"Digite 5 numeros"<<endl;
    for(i = 0;i < 5;i++)
        cin>>vet[i];

    cout<<"As raizes quadradas sao: "<<endl;
    for(i = 0;i < 5;i++){
        raiz[i] = sqrt(vet[i]);
        cout<<raiz[i]<<" "; 
    } 
    
    return 0;
}