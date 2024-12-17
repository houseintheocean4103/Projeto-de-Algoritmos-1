//opera fatoriais

#include <iostream>
using namespace std;

int fatorial(int a){
    int i;
    
    for(i = (a-1);i>0;i--)
        a = a * i;

    return a;
}

int main(){
    int n1, n2, r;
    char opr;

    cout<<"Digite um numero:"<<endl;
    cin>>n1;

    cout<<"Escolha a operacao(+,-,*,/)"<<endl;
    cin>>opr;

    cout<<"Digite outro numero:"<<endl;
    cin>>n2;

    if(opr == '+'){
        r = fatorial(n1) + fatorial(n2);
        cout<<"O resultado e: "<<r;
    }

    if(opr == '-'){
        r = fatorial(n1) - fatorial(n2);
        cout<<"O resultado e: "<<r;
    }

    if(opr == '*'){
        r = fatorial(n1) * fatorial(n2);
        cout<<"O resultado e: "<<r;
    }    

    if(opr == '/'){
        r = fatorial(n1) / fatorial(n2);
        cout<<"O resultado e: "<<r;
    }

    return 0;
}
