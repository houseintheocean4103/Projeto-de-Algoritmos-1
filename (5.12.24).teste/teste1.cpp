#include <iostream>
using namespace std;
int main () {
	int vetA[10], vetB[4];
	int i,j,n,cont; //sem bool
	
	cout<<"Escreva os numeros"<<endl;  
	for (i=0; i<10; i++)
		cin>>vetA[i]; 	

	cout<<"Escreva as posicoes"<<endl;
	for (i=0; i<4; i++)
		cin>>vetB[i]; //correção:variável de  controle mudada para 'i' para se adequar ao 'for'
	
	for (i=0; i<4;i++) { //correção:fim(i<10) está fora do escopo de 'vetB' pois este tem tamanho '[4]'
		n = vetA[ vetB[i] ];

		if (n == 1)  //falta o caso do 'n = 1' e 'n = 2'
			cout<<n<<" nao e primo"<<endl;

        if (n == 2)
			cout<<n<<" e primo"<<endl;    

		if (n > 2){	

			cont = 0; //'cont' inicializada
			for ( j = 2; j < n; j++) { //intervalo deve ser 'inicio(j=2)' e 'fim(j<n)' para que '1' e o próprio número 'n' não sejam divisores
				if (n%j==0)
					cont++;
			}
			if (cont == 0){ //se 'cont' não mudar 'n' é primo
				cout<<n<<" e primo"<<endl;
	
			} else { //se 'cont' mudar 'n' não é primo
				cout<<n<<" nao e primo"<<endl;
			}
		}	
	}
	return 0;	
}

