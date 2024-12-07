#include <iostream>
using namespace std;
int main () {  //sem bool
	int vetA[10], vetB[4];
	int i,j,n,cont;
	
	cout<<"Escreva os numeros"<<endl;
	for (i=0; i<10; i++)
		cin>>vetA[i];

	cout<<"Escreva as posicoes"<<endl;	
	for (i=0; i<4; i++)
		cin>>vetB[i]; //correção:variável de  controle mudada para 'i' para se adequar ao 'for'
	
	for (i=0; i<4;i++) {
		n = vetA[ vetB[i] ];

		if (n == 2 or n == 1)
			cout<<n<<" nao e primo"<<endl;

		if (n > 2){	

			cont = 0;
			for ( j = 2; j < n; j++) {
				if (n%j==0)
					cont++;
			}
			if (cont == 0){
				cout<<n<<" e primo"<<endl;
	
			} else {
				cout<<n<<" nao e primo"<<endl;
			}
		}	
	}
	return 0;	
}

