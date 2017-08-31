#include "iostream"
#include "cstdlib"
#include "windows.h"
#include "string.h"
#include "conio.h"
#include "math.h"
#include "stdlib.h"
#define tam 2
#define pi 3.14
using namespace std;
void menu(){
cout << " ------------------------ \
    \n      MENU DE OPÇÕES \
    \n ------------------------ \
    \n 1 - Prestação em atraso \
    \n 2 - Troca de variaveis \
    \n 3 - Distributiva \
    \n 4 - Volume da caixa \
    \n 5 - Raiz quadrada \
    \n ESC - Sair \
    \n ------------------------ "
<< endl;
}
void cabecalho_resultado(){
    cout << "-----------------------------------" << endl;
    cout << "         R E S U L T A D O         " << endl;
    cout << "-----------------------------------" << endl;
}
void cabecalho_opcao(string titulo){
    cout << "-----------------------------------" << endl;
    cout << "        " << titulo  << "         " << endl;
    cout << "-----------------------------------" << endl;
}
void calculando(){
    cout << "Calculando ..." << endl;
    Sleep(2500);
    system("cls");
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    char tecla = '0';
    //VARIAVEIS PARA A OPÇÃO 1
    double prestacao[tam],taxa[tam],dias[tam],atual[tam];
    //VARIAVEIS PARA A OPÇÃO 2
    double val1[tam],val2[tam],temp[tam];
    //VARIAVEIS PARA A OPÇÃO 3
    double a[tam],b[tam],c[tam],d[tam],dista[tam],distb[tam],distc[tam],distributiva[tam];
    //VARIAVEIS PARA A OPÇÃO 4
    double volume[tam],largura[tam],altura[tam],comprimento[tam];
    //VARIAVEIS PARA A OPÇÃO 5
    double numero[tam], quadrado[tam];
    //GLOBAIS
    int cont;
    while (tecla != 27){
        menu();
        tecla = getch();
        switch (tecla){
            case '1':
            system("cls");
            cabecalho_opcao("PRESTAÇÃO EM ATRASO");
            for (cont=0; cont<tam; cont++){
                cout << "Digite o valor da " << cont+1 <<"ª prestação: ";
                cin >> prestacao[cont];
                cout << "Digite a taxa de atraso: ";
                cin >> taxa[cont];
                cout << "Digite a quantidade de dias em atraso: ";
                cin >> dias[cont];
                atual[cont] = prestacao[cont]+((prestacao[cont]*(taxa[cont]/100))*dias[cont]);
            }
            calculando();
            cabecalho_resultado();
            for (cont=0;cont<tam;cont++){
                cout << "O valor da "<< cont+1 << "ª prestação é: " << atual[cont] << endl;
            }
            Sleep(5000);
            system("cls");
            break;
            case '2':
                system("cls");
                cabecalho_opcao("TROCA DE VALORES");
                for (cont=0; cont<tam; cont++){
                    cout << "Digite o 1º valor: ";
                    cin >> val1[cont];
                    cout << "Digite o 2º valor: ";
                    cin >> val2[cont];
                    temp[cont] = val1[cont];
                    val1[cont] = val2[cont];
                    val2[cont] = temp[cont];
                    calculando();
                    cabecalho_resultado();
                    cout << "O 1º valor com a troca é: " << val1[cont] << endl;
                    cout << "O 2º valor com a troca é: " << val2[cont] << endl;

                }
            break;
            case '3':
                system("cls");
                cabecalho_opcao("CONTA DISTRIBUTIVA");
                for (cont=0; cont<tam; cont++){
                    cout << cont+1 << "ª distributiva - Digite um valor para A: ";
                    cin >> a[cont];
                    cout << cont+1 << "ª distributiva - Digite um valor para B: ";
                    cin >> b[cont];
                    cout << cont+1 << "ª distributiva - Digite um valor para C: ";
                    cin >> c[cont];
                    cout << cont+1 << "ª distributiva - Digite um valor para D: ";
                    cin >> d[cont];
                    dista[cont] = a[cont]*b[cont]+a[cont]*c[cont]+a[cont]*d[cont];
                    distb[cont] = b[cont]*c[cont]+b[cont]*d[cont];
                    distc[cont] = c[cont]*d[cont];
                    distributiva[cont] = dista[cont]+distb[cont]+distc[cont];
                }
                calculando();
                cabecalho_resultado();
                for (cont=0;cont<tam;cont++){
                    cout << "O valor da " << cont+1 <<"ª distributiva é: " << distributiva[cont] << endl;
                }
                system("cls");
            break;
            case '4':
                system("cls");
                cabecalho_opcao("VOLUME DA CAIXA");
                for (cont=0; cont<tam; cont++){
                    cout << "Digite o comprimento da caixa: ";
                    cin >> comprimento[cont];
                    cout << "Digite o valor para a largura: ";
                    cin >> largura[cont];
                    cout << "Digite o valor da altura: ";
                    cin >> altura[cont];
                    volume[cont] = comprimento[cont]*largura[cont]*altura[cont];
                }
                calculando();
                cabecalho_resultado();
                for (cont=0;cont<tam;cont++){
                    cout << "O volume da " << cont+1 << "ª caixa é: " << volume[cont];
                }
            break;
            case '5':
                system("cls");
                cabecalho_opcao("RAIZ QUADRADA");
                for (cont=0; cont<tam; cont++){
                    cout << "Digite um numero inteiro qualquer: ";
                    cin >> numero[cont];
                    quadrado[cont] = sqrt(numero[cont]);
                }
                calculando();
                cabecalho_resultado();
                for (cont=0;cont<tam;cont++){
                    cout << "A raiz quadrada de " << numero[cont] << " é " << quadrado[cont] << endl;
                }
                Sleep(5000);
                system("cls");
            break;
            case 27:
                system("cls");
                cout << "-------------------------------" << endl;
                cout << " Você escolheu sair do sistema " << endl;
                cout << " Saindo ..." << endl;
                cout << "-------------------------------" << endl;
                break;
            default:
                system("cls");
                cout << "------------------------------------" << endl;
                cout << "Por favor, digite uma opção válida !" << endl;
                cout << "------------------------------------" << endl;
                Sleep(2500);
                system("cls");
        }
    }
    system("exit");
    return 0;
}
