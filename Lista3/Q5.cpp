//altera uma agenda com base em posicoes disponiveis

#include <iostream>
using namespace std;

int main(){
    string tab[8], nome;
    int i, pos;

    for(i=0;i<8;i++) //vetores/listas semore tem que ser preenchidas manualmente
        tab[i] = "disponivel";

    pos = 0;

    while(pos != -1){
        cin>>nome;
        cin>>pos;

        if(tab[pos] == "disponivel")
            tab[pos] = nome;
        else{
            cout<<"Nao disponivel"<<endl;
        }
        
        cout<<"Tabela atual:"<<endl;
        for(i=0;i<8;i++)
            cout<<tab[i]<<" ";
    }
    if(pos == -1)
        cout<<"Programa encerrado";           

}
