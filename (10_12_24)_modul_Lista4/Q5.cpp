//retorna a posicao de um elemento em um vetor

#include <iostream>
using namespace std;

int buscavet(int V[], int N, int A){
    int i;       //vetores dentro do escopo de subprogramas

    for(i=0;i<N;i++){
        if(V[i] == A)
            return i; //o primeiro return alcançado será o único a ser executado
    }                 //dessa forma, se o loop 'for' falhar, 'return -1' será executado
    return -1;        //e se o loop suceder, 'return i' será executado
}

int main(){
    int n, a, i;

    cout<<"Digite o tamanho do vetor:"<<endl; 
    cin>>n;

    int vet[n]; //vetor e declarado com tamanho 'n' apos input do valor de 'n'

    cout<<"Digite elementos para o vetor:"<<endl;
    for(i=0;i<n;i++)
        cin>>vet[i];

    cout<<"Digite que elemento quer busccar no vetor:"<<endl;
    cin>>a;
                                                //nome do vet ao utilizar a função
    cout<<"A posicao do elemento e: "<<buscavet(vet, n, a);

    return 0;
}
