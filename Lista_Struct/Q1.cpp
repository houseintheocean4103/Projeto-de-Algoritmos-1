//NOTAS DA TURMA

#include <iostream>
#include <cctype> //para usar a função 'toupper()'

using namespace std;

char upper(char a){ //função para evitar erros de formatação em momentos de comparação
    
    a = toupper(a); //transforma caracteres em maiúsculos

    return a;
}

struct aluno{ //registro para cada aluno
    int nmat; //número de matrícula
    string nome; //nome do aluno
    float nota1, nota2; //notas
    char sexo; //sexo
};

int main(){
    int i,    //variável de controle para loops
    n_alunos, //número de alunos
    qtd_m,    //quantidade de masculinos
    qtd_f;    //quantidade de femininos

    float soma_geral, //soma das médias individuais
    mda_geral,        //média geral
    soma_m,           //soma das médias masculinas individuais
    mda_m,            //média geral masculina
    soma_f,           //soma das médias femininas individuais
    mda_f;            //média geral masculina 

    do{ //uma nova entrada é pedida se seu valor for menor ou igual a 0
        cout<<"Digite o número de alunos: "<<endl;
        cin>>n_alunos; //recebe o número de alunos

        if(n_alunos <= 0) //mensagem caso o valor da entrada seja inválido e entre em loop
            cout<<"Tamanho invalido. Valores devem ser maiores que 0."<<endl;
        else{        //caso contrário, executa o progrma

            aluno turma[n_alunos]; //vetor de registros da turma

            for(i=0;i<n_alunos;i++){ //preenche os campos do registro
                cout<<"Digite o numero de matricula do aluno "<<i<<": "<<endl;
                cin>>turma[i].nmat;
                cout<<"Digite o nome do aluno "<<i<<": "<<endl;
                cin>>turma[i].nome;

                do { //pede novamente valores para as notas enquanto não estiverem entre 0 e 10
                    cout<<"Digite a primeira e a segunda nota do aluno "<<i<<"(entre 0 e 10): "<<endl;
                    cin>>turma[i].nota1>>turma[i].nota2;
                }
                while(turma[i].nota1 < 0 or turma[i].nota1 > 10 or turma[i].nota2 < 0 or turma[i].nota2 > 10);
                
                do { //pede novamente um valor para sexo enquanto diferente de 'M' ou 'F'
                    cout<<"Digite o sexo do aluno "<<i<<"('M' ou 'F'): "<<endl;
                    cin>>turma[i].sexo;
                }
                while(turma[i].sexo != 'M' and turma[i].sexo != 'F');
            }

            soma_geral = 0; //inicialização
            soma_m = 0;     
            soma_f = 0;     
            qtd_m = 0;      
            qtd_f = 0;      

            for(i=0;i<n_alunos;i++){ //engloba todos os alunos
                soma_geral += (turma[i].nota1 + turma[i].nota2)/2; //as médias individuais da turma são acumuladas em 'soma_geral'
                if(upper(turma[i].sexo) == 'M'){
                    soma_m += (turma[i].nota1 + turma[i].nota2)/2; //elementos têm suas quantidades contabilizadas('qtd_m' e 'qtd_f')
                    qtd_m += 1;                                    //e médias individuais acumuladas('soma_m' e 'soma_f')
                }                                                  //conforme seu sexo(comparado por meio de da função 'upper')
                else if(upper(turma[i].sexo) == 'F'){
                    soma_f += (turma[i].nota1 + turma[i].nota2)/2;
                    qtd_f += 1;
                }    
        
            }

            mda_geral = soma_geral/float(n_alunos); //cálculo de média: somas divididas pelas quantidades
            mda_m = soma_m/float(qtd_m);
            mda_f = soma_f/float(qtd_f);

            cout<<"A media geral e: "<<mda_geral<<endl; //imprime média geral

            if(qtd_m == 0) //se não houve incremento em 'qtd_m', nenhum estudante do sexo masculino foi registrado
                cout<<"Nao ha alunos do sexo masculino."<<endl;
            else           //do contrário, imprime a média normalmente
                cout<<"A media masculina e: "<<mda_m<<endl;
            if(qtd_f == 0) //da mesma forma, para o sexo feminino
                cout<<"Nao ha alunos do sexo feminino."<<endl;
            else
                cout<<"A media feminina e: "<<mda_f<<endl;
        }   
    }while(n_alunos <= 0);
}  

