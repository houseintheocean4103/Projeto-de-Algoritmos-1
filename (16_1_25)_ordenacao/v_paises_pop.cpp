#include <iostream>
using namespace std;

//declaração da struct país
struct pais {
	string nome; //campo 1
	int populacao; //campo 2
}; //este ponto-virgula é obrigatório

//subprograma para imprimir os dados
void imprimeDados (pais vetor[], int tamanho) {
	for (int i=0; i<5;i++) {
		cout<<vetor[i].nome<<"\t"<<vetor[i].populacao<<endl;
	}
}

void selection_sort(pais vetor[], int tam){
    int menor, indice, j;
    pais aux;
 
    for (indice = 0; indice < tam-1; indice++) {
        menor = indice;
        for (j = indice + 1; j < tam; j++) {
            if (vetor[j].populacao < vetor[menor].populacao){
                menor = j;
            }
        }
        aux = vetor[indice];
        vetor[indice] = vetor[menor];
        vetor[menor] = aux;
    }
}


int main () {
	//declarar um vetor de páises com capacidade 5
	pais vetor[5];
	int i;
	
	cout<<"Preencha os dados de 5 países\n";
	for (i=0; i<5;i++) {
		cin>>vetor[i].nome;
		cin>>vetor[i].populacao;
	}	
	
	imprimeDados(vetor, 5);	
    selection_sort(vetor, 5);
    cout<<"Depois da ordenação"<<endl;
    imprimeDados(vetor, 5);	
	return 0;	
}
