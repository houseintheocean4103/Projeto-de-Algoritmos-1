#include <iostream>
using namespace std;

void print(int vetor[], int tam){
    int i;

    for(i=0;i<tam;i++){
        cout<<vetor[i];
    }
    cout<<endl;
}

void sel_sort(int vetor[], int tam){
    int indice, maior, j, aux;

    for(indice = 0; indice < tam - 1;indice++ ){
        maior = indice;
        for(j = indice + 1; j < tam; j++){
            if(vetor[j] > vetor[maior]){   //agora procura valores maiores à direita do pivô, realizando a troca ao encontrá-los
                maior = j;
            }
        }
        aux = vetor[indice];
        vetor[indice] = vetor[maior];
        vetor[maior] = aux;

        print(vetor, tam);

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
