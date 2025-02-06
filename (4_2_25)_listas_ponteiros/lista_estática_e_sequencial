#include <iostream>
using namespace std;
#define TAMANHO 10
//lista sequencial e estática

struct lista {
string item[TAMANHO];
int inicio, fim;
} compras; //compras eh variavel do tipo lista

void cria_lista(){
    compras.inicio=0;
    compras.fim=0;
}

bool esta_vazia(){
    if (compras.fim == 0){
        return true; //indica vazia representado por 1
    } else {
        return false;
    }
}

void inserir () {
    //verificar se tem espaço
    if (compras.fim == TAMANHO){
        cout<<"Lista cheia"<<endl;
    } else {
        //inserir no inicio
        string item;
        cout<<"Digite o nome do item da lista ";
        cin>>item;
        //inserir no inicio
        if (compras.inicio==compras.fim){//só acontece 1 vez
            compras.item[compras.fim] = item;
            compras.fim++;
        } else {
            int posicao;
            cout<<"Em qul posicao deseja inserir ";
            cin>>posicao;
            //verificar se é uma posicao válida
            if(posicao > compras.fim){
                cout<<"Posicao valida"<<endl;
            } else {
                //move os elementos
                for (int i = compras.fim; i > posicao; i--){
                    compras.item[i]=compras.item[i-1];
                } 

                compras.item[posicao] = item;
                compras.fim++;
            }
        }
    }
}

void imprimir(){
    cout<<"Imprimindo a lista "<<endl;
    for (int i = compras.inicio; i < compras.fim;i++)
        cout<<compras.item[i]<<endl;

}

void buscar(){
    bool achou = false;
    string nome = "";
    cout<<"Digite o nome para buscar "<<endl;
    cin>>nome;
    for (int i = compras.inicio; i < compras.fim;i++){
        if (compras.item[i] == nome){
            achou = true;
        }
    }

    cout<<achou<<endl;
}

bool buscar_item(string busca){
    int i = compras.inicio; //inicializa com 0
    while(i < compras.fim and compras.item[i] != busca){
        i++;
    }
    if (i<compras.fim)
        return true; //1
    return false; //0
}

void remover () {
    bool achou = false;
    string exc = "";
    int posicao;
    cout<<"Digite o nome item para exclusão "<<endl;
    cin>>exc;

    if (esta_vazia() == 1){
        cout<<"Lista vazia"<<endl;
    } else {
        for (int i = compras.inicio; i < compras.fim;i++){
            if (compras.item[i] == exc){
                achou = true;
                posicao = i;
            }
        }
        if(achou == false){
            cout<<"Elemento não existe"<<endl;
        } else {
            for(int j = posicao; j < compras.fim - 1;j++)
                compras.item[j] = compras.item[j + 1];
            compras.fim--;    
        }
    }
}

string remover_uma_ocorrencia () { //completar
    bool achou = false;
    string exc = "";
    int posicao;
    cout<<"Digite o nome item para exclusão "<<endl;
    cin>>exc;

    if (esta_vazia() == 1){
        cout<<"Lista vazia"<<endl;
    } else {
        for (int i = compras.inicio; i < compras.fim;i++){
            if (compras.item[i] == exc){
                achou = true;
                posicao = i;

                if(achou == false){
                    cout<<"Elemento não existe"<<endl;
                    return = 
                } else {
                    for(int j = posicao; j < compras.fim - 1;j++)
                        compras.item[j] = compras.item[j + 1];
                    compras.fim--;    
                }
            }
        }
        
    }
}

int main() {
    cria_lista();
    cout<<esta_vazia()<<endl;
    int opcao = 0;
    while(opcao != -1){
        cout<<"1.inserir  2.imprimir  3.buscar  4.remover"<<endl;
        cin>>opcao;
        if(opcao == 1)
            inserir();
        else if (opcao==2)
            imprimir();
        else if (opcao==3)
            buscar();
        else if (opcao==4)
            remover();
    }
}
