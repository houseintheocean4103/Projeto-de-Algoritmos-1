#include <iostream>
using namespace std;
int main () {
	int vetA[10], vetB[4];
	int i,j,n,cont;
	bool temPrimo=false;
	for (i=0; i<10; i++)
		cin>>vetA[i];
	for (i=0; i<4; i++)
		cin>>vetB[j];
	for (i=0; i<10;i++) {
		n=vetA[ vetB[i] ];
		for (j=1;j<=n; j++) {
			if (n%j==0)
				cont++;
		}
		if (cont != 0) {
			cout<<n<<endl;
			temPrimo=true;
		}
	}
	if (not temPrimo)
		cout<<-1;	
	return 0;	
}


