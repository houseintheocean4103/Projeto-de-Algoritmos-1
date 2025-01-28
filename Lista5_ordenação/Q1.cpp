#include <iostream>
using namespace std;

void sel_sort(int vetor[], int tam){
    int indice, menor, j, aux;

    for(indice = 0; indice < tam - 1;indice++ ){
        menor = indice;
        for(j = indice + 1; j < tam; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        aux = vetor[indice];
        vetor[indice] = vetor[menor];
        vetor[menor] = aux;
    }   
}

int main(){
    int tam, i;

    cout<<"Digite o numero de elementos"<<endl;
    cin>>tam;

    int vet[tam];

    for(i=0;i<tam;i++){
        cin>>vet[i];
    }

    sel_sort(vet, tam);

    for(i=0;i<tam;i++){
        cout<<vet[i];
    }
}
