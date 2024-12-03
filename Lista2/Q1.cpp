#include <iostream>

using namespace std;

int main(){
  int valor, canhao, polvora, espada;
  cout<<"Digite o valor inicial ";
  cin>>valor;
  
  canhao = valor/10000;
  int resto = valor%10000;
  
  polvora = resto/2000;
  resto = resto%2000;
  espada = resto/1500;

  cout<<canhao<<endl<<polvora<<endl<<espada;

  return 0;
}
