#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string.h"
#include "windows.h"
#include "conio.h"

#define max 10

using namespace std;

void cabecalho(string titulo){
cout << "------------------------------" << endl;
cout << "      "<< titulo << endl;
cout << "------------------------------" << endl;
}

void menu(){
cout << " MENU DE OP��ES \
    \n 1 - Cadastrar \
    \n 2 - Relat�rio \
    \n ESC - Sair "
<< endl;
}

char tecla = '0';
int pos=-1;
int cont, qtd_mulheres, qtd_pessoas, soma_idades;
float maior_salario, media_idades;

struct pessoas{
    string nome[max];
    float salario[max];
    int idade[max];
    char sexo[max];
};
int main(){
    setlocale(LC_ALL,"Portuguese");
    while (tecla != 27){
        struct pessoas dados;
        menu();
        tecla = getch();
        switch(tecla){
            case '1':
                system("cls");
                if (pos > max){
                    cout << "O banco de dados j� est� cheio";
                    break;
                }
                pos++;
                cabecalho("CADASTRO DE PESSOAS");
                cout << "Digite um nome: ";
                cin >> dados.nome[pos];
                cout << "Digite um sal�rio: ";
                cin >> dados.salario[pos];
                cout << "Digite uma idade: ";
                cin >> dados.idade[pos];
                cout << "Digite um sexo: ";
                cin >> dados.sexo[pos];
                cont++;
                if (dados.sexo[pos] == 'F' or dados.sexo[pos] == 'f'){
                    qtd_mulheres +=1;
                }
                soma_idades += dados.idade[pos];
                media_idades = soma_idades/cont;
                if (maior_salario < dados.salario[pos] or pos == 0){
                    maior_salario = dados.salario[pos];
                }
                qtd_pessoas = cont;
                system("cls");
            break;
            case '2':
                system("cls");
                cabecalho("RELAT�RIO DE DADOS");
                cout << "O total de mulheres �: " << qtd_mulheres << endl;
                cout << "A m�dia das idades �: " << media_idades << endl;
                cout << "O maior sal�rio �: " << maior_salario << endl;
                cout << "Total de pessoas cadastradas: " << qtd_pessoas << endl;
                Sleep(5000);
                system("cls");
            break;
        }
    }
    return 0;
}
