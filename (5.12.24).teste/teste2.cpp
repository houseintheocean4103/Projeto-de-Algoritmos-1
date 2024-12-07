#include <iostream>
using namespace std;
int main () {
	int vetA[10], vetB[4];
	int i,j,n,cont;
	bool temPrimo=false;

    cout<<"Digite os numeros"<<endl;
	for (i=0; i<10; i++)
		cin>>vetA[i];
	
    cout<<"Digite as posicoes"<<endl;
    for (i=0; i<4; i++)
		cin>>vetB[i];  //correção:variável de  controle mudada para 'i' para se adequar ao 'for'
	
    for (i=0; i<4;i++) { //correção:fim(i<10) está fora do escopo de 'vetB' pois este tem tamanho '[4]'
		n = vetA[ vetB[i] ]; //falta o caso do 'n = 1' e 'n = 2'

        if (n == 1 or n == 0)
            cout<<n<<" nao e primo"<<endl;
        
        if (n == 2){
            cout<<n<<" e primo"<<endl;
            temPrimo = true;
            }
        if (n > 2){    
        	cont = 0;
			for ( j = 2; j < n; j++) { //intervalo deve ser 'inicio(j=2)' e 'fim(j<n)' para que '1' e o próprio número 'n' não sejam divisores
				if (n%j==0)
					cont++; //falta inicializar 'cont'
			}
			if (cont == 0) { //'cont' deve ser igual a '0' para que o número seja primo
				cout<<n<<" e primo"<<endl;
				temPrimo=true;
			}
		}	
	}
	if (not temPrimo)			//caso 1: se pelo menos um número primo foi encontrado, temPrimo será true e o '!temPrimo' será 'false', e o bloco dentro do 'if' não será executado.
		cout<<-1<<"/nao ha primos";	//caso 2: se nenhum número primo foi encontrado, 'temPrimo' será 'false'. O '!temPrimo' será 'true', e o programa imprimirá '-1'.
	return 0;	
}
