#include <iostream>

using namespace std;

int main(){

    int valor, i;
    i = 1;

    cout<<"Digite o número: ";
    cin>>valor;

    while (i <= 10){
        cout << valor*i << endl;
        i++; //equivale ao "i+="
    }
}