//tabuada com for

#include <iostream>

using namespace std;

int main(){
    int valor, i;

    cout<<"Digite o número: ";
    cin>>valor;

    for(i = 1; i <= 10; i++){
        cout << valor*i << endl;
    }
}
