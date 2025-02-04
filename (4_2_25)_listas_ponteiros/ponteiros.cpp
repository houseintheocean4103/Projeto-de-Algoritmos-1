#include <iostream>
using namespace std;

int main(){
    int n = 12345;
    cout<<n<<endl;  //valor de n
    cout<<&n<<endl; //endereço de n

    int *p=&n;      //*p = NULL: endereço nulo, útil para inicializar
    cout<<p<<endl;  //endereço de n, apontado/guardado por 'p'
    cout<<&p<<endl; //endereço de 'p'

    *p = 567;       //mudar o valor armazenado no endereço apontado por '*p', ou seja 'n'
    cout<<n<<endl;
}
