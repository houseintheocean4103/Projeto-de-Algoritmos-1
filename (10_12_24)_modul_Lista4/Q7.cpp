//prefixo e sufixo de uma palavra

#include <iostream>
using namespace std;

string sufixo(string a, int n){
    int i;
    string b;
            //começa em (tamanho - alcance n da função)
    for(i=(a.length() - n);i<a.length();i++) // a.length() devolvo tamanho da string
        b += a[i];              //termina em 'tamanho'
        //adiciona caracteres à palavra 'b'
    return b;
}

string prefixo(string a, int n){
    int i;
    string b;

    for(i=0;i<n;i++)
        b += a[i]; 
    
    return b;
}

int main(){ 
    char opr;
    string p;
    int N;

    cout<<"Digite uma palavra: "<<endl;
    cin>>p;

    cout<<"Digite a operacao('S'ufixo ou 'P'refixo):"<<endl;
    cin>>opr;

    cout<<"Digite o alcance da operacao:"<<endl;
    cin>>N;

    if(opr == 'S')
        cout<<"O sufixo e: "<<sufixo(p, N);

    if(opr == 'P')
        cout<<"O prefixo e: "<<prefixo(p, N);

    return 0;
}
