//soma todos os numeros menores que 1000 que sao multiiplos de 3 e 5

#include <iostream>

using namespace std;

int main(){
    int soma, i;
    soma = 0;

    for(i = 0 ;i < 1000 ; i++){
        if((i%5 == 0) or (i%3 == 0)){
            soma = soma + i;

        }
    }

    cout<<"O resultado e: "<<soma;

}
