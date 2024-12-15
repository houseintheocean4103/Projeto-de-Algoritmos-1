#include <iostream>
using namespace std;

int main(){
    int vet[8], pos[8], neg[8], i, j, k;

    j = 0;
    k = 0;

    cout<<"Digite 8 numeros: "<<endl;
    for(i=0;i<8;i++){
        cin>>vet[i];
        if(vet[i] > 0){
            pos[j] = vet[i];
            j = j + 1;
        }    
        if(vet[i] < 0){ 
            neg[k] = vet[i];
            k = k + 1;
        }  
    }
    cout<<"Os positivos sao: "<<endl;
    for(i=0;i<j;i++)    
        cout<<pos[i]<<endl;

    cout<<"Os negativos sao: "<<endl;    
    for(i=0;i<k;i++)    
        cout<<neg[i]<<endl;
}