#include "iostream"
#include "cstdlib"
#include "conio.h"
#include "math.h"
#include "windows.h"
#include "stdio.h"
#include "stdlib.h"
using namespace std;
//AREA DE FUNÇÕES
float lado1(){
    float lado1;
    cout << "Digite o 1º lado: ";
    cin >> lado1;
    return lado1;
}
float lado2(){
    float lado2;
    cout << "Digite o 2º lado: ";
    cin >> lado2;
    return lado2;
}
float lado3(){
    float lado3;
    cout << "Digite o 3º lado: ";
    cin >> lado3;
    return lado3;
}
string eTriangulo(float lado1, float lado2, float lado3){
    string validacao;
    if (lado1+lado2 > lado3 or lado1+lado3 > lado2 or lado2+lado3 > lado1){
        validacao = "É triangulo !";
    }
    else {
        validacao = "Não é triangulo !";
    }
    return validacao;
}
string tipoTriangulo(float lado1, float lado2, float lado3){
    string verificaTipo;
    if (lado1 == lado2 && lado2 == lado3){
        verificaTipo = "Esse tiangulo é equilátero !";
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        verificaTipo = "Esse triangulo é isóceles !";
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        verificaTipo = "Esse triangulo é escaleno !";
    }
    return verificaTipo;
}
float semiperimetro (float lado1, float lado2, float lado3){
    int P;
    float S;
    P = lado1+lado2+lado3;
    S = P/2;
    return S;
}
float heron (float lado1, float lado2, float lado3){
    float S, A;
    S = semiperimetro(lado1,lado2,lado3);
    A = sqrt(S*(S-lado1)*(S-lado2)*(S-lado3));
    return A;
}
float descobreBase (float lado1, float lado2, float lado3){
    float base;
    if (lado1 > lado2 && lado1 > lado3){
        base = lado1;
    }
    else if (lado2 > lado1 && lado2 > lado3){
        base = lado2;
    }
    else if (lado3 > lado1 && lado3 > lado3){
        base = lado3;
    }
    else if (lado1 == lado2 && lado2 == lado3){
        base = lado1;
    }
}
int relatorio(float lado1, float lado2, float lado3, string etriangulo, string tipotriangulo, float semiperimetro, float heron){
    cout << "Lado A: " << lado1 << endl;
    cout << "Lado B: " << lado2 << endl;
    cout << "Lado C: " << lado3 << endl;
    cout << "A figura: " << etriangulo << endl;
    cout << "Tipo do triângulo: " << tipotriangulo << endl;
    cout << "O semi-perimetro é: " << semiperimetro << endl;
    cout << "A área pela formula de Heron: " << heron << endl;
    system("pause");
    return 0;
}
//AREA DE PROCEDIMENTOS
void cabecalho(string titulo){
    cout << "------------------------------" << endl;
    cout << "       "<< titulo <<"        " << endl;
    cout << "------------------------------" << endl;
}
void menu(){
    system("cls");
    cout << "--------------------------------------" << endl;
    cout << "            MENU DE OPÇÕES            " << endl;
    cout << "--------------------------------------" << endl;
    cout << " 1 - Digitar os dados \
             \n 2 - Verificar se é triangulo \
             \n 3 - Verificar o tipo do triangulo \
             \n 4 - Calcular semi-perimetro \
             \n 5 - Calcular área do triangulo \
             \n 6 - Descobrir a base \
             \n 7 - Calcular a altura do triangulo \
             \n 8 - Relatório"
    << endl;
    cout << "--------------------------------------" << endl;
}
void feedback(string titulo){
    Sleep(1000);
    cout << "------------------------------" << endl;
    cout <<  titulo << endl;
    cout << "------------------------------" << endl;
    Sleep(2000);
}
//AREA DE VARIÁVEIS
float ladoA, ladoB, ladoC, semiP, area;
int relatorioSaida;
string validacao, validaTipo;
char tecla = '0';
int main(){
    setlocale(LC_ALL, "Portuguese");
    while (tecla != 'S'){
        menu();

        cout << "Digite uma opção: ";
        cin >> tecla;

        switch (tecla){
            case '1':
                system("cls");
                cabecalho("ENTRADA DE DADOS");
                ladoA = lado1();
                ladoB = lado2();
                ladoC = lado3();
                feedback("DADOS ARMAZENADOS COM SUCESSO");
            break;

            case '2':
                system("cls");
                cabecalho ("VALIDA TRIANGULO");
                validacao = eTriangulo(ladoA,ladoB,ladoC);
                cout << validacao << endl;
            break;

            case '3':
                //system("cls");
                cabecalho ("VALIDA TIPO");
                validaTipo = tipoTriangulo(ladoA,ladoB,ladoC);
                cout << validaTipo << endl;
                Sleep(5000);
            break;

            case '4':
                system("cls");
                cabecalho("SEMI-PERÍMETRO");
                semiP = semiperimetro(ladoA,ladoB,ladoC);
                cout << semiP << endl;
            break;

            case '5':
                system("cls");
                cabecalho("AREA COM HERON");
                area = heron(ladoA,ladoB,ladoC);
                cout << fixed;
                cout.precision(2);
                cout << area << " cm²" << endl;
            break;

            case '6':
                system("cls");
                cabecalho("DESCOBRIR A BASE");
            break;

            case '7':
                system("cls");
                cabecalho("CALCULAR ALTURA");
            break;

            case '8':
                system("cls");
                cabecalho("RELATÓRIO DE SAÍDA");
                relatorioSaida = relatorio(ladoA, ladoB, ladoC, validacao, validaTipo, semiP, area);
            break;

            case 'S':
                system("cls");
                cabecalho("ESTAMOS DE SAÍDA !");
                cout << "Você escolheu sair do programa" << endl;
                Sleep(2000);
                cout << "Saindo ..." << endl;
                Sleep(2000);
            break;

            default:
                cabecalho("OPÇÃO INVÁLIDA");
                cout << "Selecione uma opçõe válida no menu";
                Sleep(3000);
            break;
        }
    }
    system("exit");
    return 0;
}
