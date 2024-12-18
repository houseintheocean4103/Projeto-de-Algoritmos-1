#include <iostream>
using namespace std;

int sdig(int n){
    int soma;
                        // n = 1234     soma = 0
    soma = 0;           // (1234/10)   
                        // n = 123 , 4  soma = 0 +  4
    while(n >= 1){      // (123/10)
        soma += n%10;   // n = 12  , 3  soma = 0 + 4 + 3
        n = n/10;       // (12/10)
                        // n = 1   , 2  soma = 0 + 4 + 3 + 2
    }                   // (1/10)
                        // n = 0  , 1  soma = 0 + 4 + 3 + 2 + 1
    return soma;        // encerra loop while
}

bool harshard(int n){
    bool eha;
    
    eha = false;

    if(n%sdig(n) == 0)
        eha = true;
    
    return eha;
}

int main(){
    int n;

    cout<<"Digite um numero: "<<endl;
    cin>>n;

    cout<<"O numero e um harshard: "<<harshard(n);
}
