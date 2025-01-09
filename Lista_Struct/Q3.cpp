//DADOS DOS STORMTROOPERS

#include <iostream>
#include <cctype> //para usar a função 'toupper()'
using namespace std;

string upper(string a){ //função para evitar erros de formatação em momentos de comparação
    int i;
    
    for(i=0;i<a.size();i++)
        a[i] = toupper(char(a[i])); //substitui os elementos ao atribuí-los suas versões maiúsculas
                                    //como 'toupper()' só funciona em caracteres
    return a;                       //é necessário o uso de casting para cada elemento
}

string capitalize(string a){ //função para deixar apenas a primeira letra maiúscula
    int i;

    a[0] = toupper(char(a[0])); //primeira letra transformada em maiúscula

    for(i=1;i<a.size();i++) //loop a partir da posição 1 para ignorar a primeira letra
        a[i] = tolower(char(a[i])); //substitui os elementos ao atribuí-los suas versões minúsculas
                                    //como 'tolower()' só funciona em caracteres
    return a;                       //é necessário o uso de casting para cada elemento 
}

//entrada: registro dos stormtroopers 
struct dado_storm{
    string nome, plnt_ori; //nome, planeta de origem
    int n_btl; //número de participações em batalhas
};

//a ser gerado: registro dos planetas
struct dado_plnt{
    string plnt;          //planeta
    int total_storm = 0;  //total de stormtroopers(já inicializada)
    float mda_btl = 0;    //média de batalhas por planeta(já inicializada)
};

int main(){
    int i, j, k, //variáveis de controle para loop
    cont1,       //contador de iterações
    cont_tam,    //contador para gerar tamanho do vetor de dados dos planetas
    n_storm;     //número de stormtroopers
    float total_btl; //total de batalhas por planeta
    string atual;    //reserva elementos em loop

    do{ //uso de do-while ao longo do código para garantir adequação de entrada
        cout<<"Digite o numero de stormtroopers: "<<endl;
        cin>>n_storm; //recebe o número de stormtroopers

        if(n_storm < 2) //devem haver ao menos dois stormtroopers, senão entra em loop pedindo novas entradas
            cout<<"Deve haver ao menos 2 stormtroopers para gerar uma media."<<endl; //mensagem em caso de entrada inadequada 

        else{ //do contrário, executa o programa

            dado_storm dados_s[n_storm]; //vetor dos dados dos stormtroopers

            for(i=0;i<n_storm;i++){ //preenche os campos do registro
                cout<<"Digite o nome do stormtrooper: "<<endl;
                cin>>dados_s[i].nome;
                cout<<"Digite o planeta de origem do stormtrooper: "<<endl;
                cin>>dados_s[i].plnt_ori;
            
                do{ //o stormtrooper deve ter participado de ao menos uma batalha
                    cout<<"Digite o numero de batalhas(maior ou igual a 1) do stormtrooper: "<<endl;
                    cin>>dados_s[i].n_btl;
                }while(dados_s[i].n_btl <= 0);
            }

            cont1 = 0;     //inicializa os contadores
            cont_tam = 0;

            for(i=0;i<n_storm;i++){  //o primeiro loop faz 'atual' assumir o valor dos planetas de origem
                atual = upper(dados_s[i].plnt_ori);          
                cont1=0;  //'cont1' zera para cada novo valor de 'plnt_ori' a ser testado                          
                for(j=0;j<i;j++){                       //o segundo loop engloba elementos anteriores a 'atual'
                    if(atual == upper(dados_s[j].plnt_ori)){   //se houver uma iteração desse valor anterior a 'atual', 
                        cont1+=1;                       //'cont1' se incrementa, e não inclui 'atual' no novo vetor
                    }
                }                 //pois o não-incremento de 'cont1' significa que é a primeira vez que aparece na listagem
                if(cont1 < 1){    //dessa forma são contabilizados apenas planetas novos/diferentes
                    cont_tam+=1;  //'cont_tam' se incrementa em 1 para compor o tamanho do novo registro
                }
            }

            dado_plnt dados_p[cont_tam]; //vetor dos dados dos planetas
            k = 0; //inicializa variável independente do loop

            for(i=0;i<n_storm;i++){                    //com os mesmos loops, agora, em vez de incrementar um contador, ele captura o valor do campo 'plnt_ori'
                atual = upper(dados_s[i].plnt_ori);    //toda vez que constata que não existem iterações dele anteriores a ele, ou seja, primeira vez que aparece,
                cont1=0;                               //ao mesmo tempo que rejeitará qualquer iteração futura, não importando quantas sejam
                for(j=0;j<i;j++){                      
                    if(atual == upper(dados_s[j].plnt_ori)){
                        cont1+=1;
                    }
                }
                if(cont1 < 1){    //dessa vez, cada vez que um novo valor for aceito, será atribuído ao campo planetas com índice 'k', no registro de dados dos planetas 
                    dados_p[k].plnt = dados_s[i].plnt_ori;
                    k+=1; //'k' se incrementa independentemente do loop assim que um novo elemento é encontrado
                }         //pois está associado ao tamanho 'cont_tam' do vetor gerado anteriormente
            }
                                  //os loop seguintes tem duas funcionalidades: contar quantos stormtroopers existem por planeta
                                  //e a média de participação em batalhas por planeta
                                  
            for(i=0;i<cont_tam;i++){   //engloba cada um dos planetas individualment organizados
                total_btl = 0; //'total_btl' é zerada a cada loop, para não interferir no próximo, pois o valor é diferente para cada planeta 
                for(j=0;j<n_storm;j++){                           //e compara com as ocorrências desses valores ao longo do vetor de dados dos stormtroopers
                    if(upper(dados_p[i].plnt) == upper(dados_s[j].plnt_ori)){   //para cada ocorrência encontrada,
                        dados_p[i].total_storm += 1;              //o campo 'total_storm' associado ao planeta incrementa em 1 
                        total_btl += dados_s[j].n_btl;             //e o número de batalhas 'n_btl' também associado se acumula em 'total_btl'
                    }
                }
                dados_p[i].mda_btl = total_btl / dados_p[i].total_storm;  //ao final do segundo loop, com os valores totais já contabilizados,
            }                                                            //'mda_btl' recebe a divisão entre 'total_btl' e o 'total_storm', para gerar a média

            for(i=0;i<cont_tam;i++){ //imprime todos os campos
                cout<<capitalize(dados_p[i].plnt)<<" entregou "<<dados_p[i].total_storm
                <<" stormtrooper(s), e tem participacao media em batalha igual a "<<dados_p[i].mda_btl<<endl;
            }   //uso de 'capitalize' para formatar a saída
        }
    }while(n_storm < 2);
}

