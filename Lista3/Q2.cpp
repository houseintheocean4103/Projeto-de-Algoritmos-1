//gera um vetor de 10 elementos, conta positivos, soma negativos, imprime de trás para frente os elementos

#include <iostream>
using namespace std;

int main(){
    float nr[10], somaneg, n;
    int i, qtdpos;

    i = 0; 
    qtdpos = 0;
    somaneg = 0;

    for(i = 0;i < 10;i++){
        cin>>nr[i];
    }
    for(i = 0;i < 10;i++){
        n = nr[i];
        if(n >= 0)
            qtdpos = qtdpos + 1;
        else
            somaneg = somaneg + n;    
    }
    cout<<"A qtd de numeros positivos e: "<<qtdpos<<endl;
    cout<<"A soma dos numeros negativos e: "<<somaneg<<endl;
    cout<<"os elementos sao: "<<endl;

    for(i = 9;i >= 0;i--){
        n = nr[i];
        cout<<n<<" ";
    }
    return 0;
}
