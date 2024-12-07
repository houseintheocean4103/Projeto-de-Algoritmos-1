#include <iostream>
using namespace std;
int main () {
	int vetA[10], vetB[4];
	int i,j,n,cont;
	bool temPrimo=false;
	for (i=0; i<10; i++)
		cin>>vetA[i];
	for (i=0; i<4; i++)
		cin>>vetB[j];  //correção:variável de  controle mudada para 'i' para se adequar ao 'for'
	for (i=0; i<10;i++) { //correção:fim(i<10) está fora do escopo de 'vetB' pois este tem tamanho '[4]'
		n=vetA[ vetB[i] ]; //falta o caso do 'n = 1' e 'n = 2'
		for (j=1;j<=n; j++) { //intervalo deve ser 'inicio(j=2)' e 'fim(j<n)' para que '1' e o próprio número 'n' não sejam divisores
			if (n%j==0)
				cont++; //falta inicializar 'cont'
		}
		if (cont != 0) { //'cont' deve ser igual a '0' para que o número seja primo
			cout<<n<<endl;
			temPrimo=true;
		}
	}
	if (not temPrimo)
		cout<<-1;	
	return 0;	
}

