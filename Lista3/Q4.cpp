//gera dois vetores, distribui seus elementos nas posicoes impares e pares de um vetor resultante

#include <iostream>
using namespace std;

int main(){
    int vetX[10], vetY[10], vetR[20], i;

    cout<<"Digite numerros para X: "<<endl;
    for(i=0;i<10;i++)
        cin>>vetX[i];

    cout<<"Digite numerros para Y: "<<endl;    
    for(i=0;i<10;i++)
        cin >>vetY[i];

    cout<<"O resultado e: "<<endl;
    for(i=0;i<20;i++){
        if(i%2 == 0)
            vetR[i] = vetX[i/2]; //posicoes pares
        if(i%2 == 1)// 1 / 2 = 0, resto 1. Dessa forma o índice 1 passa a condição
            vetR[i] = vetY[(i-1)/2]; //posicoes impares
        
        cout<<vetR[i]<<" ";
    }
    return 0;
}
