//CARTAS PARA O PAPAI NOEL

#include <iostream>
#include <cctype>   //para usar a função 'toupper()'
using namespace std;

string upper(string a){ //função para evitar erros de formatação em momentos de comparação
    int i = 0;

    for(i=0;i<a.size();i++)
        a[i] = toupper(char(a[i])); //substitui os elementos ao atribuí-los suas versões maiúsculas
                                    //como 'toupper()' só funciona em caracteres
    return a;                       //é necessário o uso de casting para cada elemento 
}

struct carta{               //registro da carta
    string nome_c, pedido;  //nome da criança, pedido 
};

struct brinquedo{           //registro do brinquedo
    string nome_b;          //nome do brinquedo
    int qtd_d;       //quantidade disponível
};

int main(){
    int i, j,  //variáveis de controle para loops
    n_pedidos, //número de pedidos
    n_cartas,  //número de cartas
    n_brinq;   //número de brinquedos em estoque

    do{ //uso de do-while ao longo do código para garantir adequação de entrada
        cout<<"Digite o numero de cartas: "<<endl; //recebe o número de cartas
        cin>>n_cartas; 

        if(n_cartas <= 0) //pede nova entrada se o n. de cartas for menor ou igual a zero, entrando em loop
            cout<<"O numero de cartas deve ser no minimo 1."<<endl; //mensagem caso a entrada seja inadequada

        else{ //do contrário, o código é executado

            carta cartas[n_cartas]; //vetor de registros das cartas 
    
            for(i=0;i<n_cartas;i++){  //preenche os campos do vetor de cartas
                cout<<"Digite o nome da criança: "<<endl;
                cin>>cartas[i].nome_c;
                cout<<"Digite o pedido: "<<endl;
                cin>>cartas[i].pedido;
            }

            do{
                cout<<"Digite o numero de brinquedos: "<<endl; //recebe o número de brinquedos
                cin>>n_brinq;

                if(n_brinq <= 0) //deve haver ao menos 1 brinquedo

                    cout<<"O numero de brinquedos deve ser no minimo 1."<<endl; //mensagem em caso de entrada inadequada

                else{ //caso contrário, o código é executado

                    brinquedo brinquedos[n_brinq]; //vetor de registro dos brinquedos

                    for(i=0;i<n_brinq;i++){  //preenche os campos do vetor de brinquedos
                        cout<<"Digite o nome do brinquedo: "<<endl;
                        cin>>brinquedos[i].nome_b;

                        do{ 
                            cout<<"Digite a quantidade disponivel(0 ou mais): "<<endl; //mensagem em caso de entrada inadequada
                            cin>>brinquedos[i].qtd_d;
                        }while(brinquedos[i].qtd_d < 0); //a quantidade disponível do respecctivo brinquedo não pode ser menor que 0
                    }

                    for(i=0;i<n_brinq;i++){ //lê os brinquedos disponíveis
                        n_pedidos = 0; //'n_pedidos' é zerada a cada loop pois seu valor se refere unicamente ao elemento atual do loop
                        for(j=0;j<n_cartas;j++){ //lê todas as cartas    //comparações feitas em maiúsculo para evitar erros de formatação
                            if(upper(cartas[j].pedido) == upper(brinquedos[i].nome_b)) //se forem iguais, ou seja, se houver uma carta com o pedido desse brinquedo 
                                n_pedidos+=1;                            //'n_pedidos' se incrementa em 1
                        }
                        if(n_pedidos > brinquedos[i].qtd_d)       //ao final do loop, se o número de pedidos for maior que a quantidade disponível
                            cout<<brinquedos[i].nome_b<<" ";      //desse brinquedo, imprime o nome do brinquedo 'nome_b'
                    }
                }
            }while(n_brinq <= 0);
        }
    }while(n_cartas <= 0);
}   


