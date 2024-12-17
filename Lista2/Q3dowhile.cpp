//tabuada com dowhile

#include <iostream>
using namespace std;

int main() {
    int valor, i = 1;

    cout << "Digite o número: ";
    cin >> valor;

    do { //o código é executado ao menos uma vez, independentemente do resto do loop
        cout << valor << " x " << i << " = " << valor * i << endl;
        i++;  // Incrementa o valor de i
    } while (i <= 10);  // Condição para continuar o loop

    return 0;
}
