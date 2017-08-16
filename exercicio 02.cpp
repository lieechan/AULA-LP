#include "iostream"
#include "cstdlib"
#include "math.h"
#include "windows.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"
using namespace std;
void menu(){
system ("cls");
cout <<
    "Menu de opções: \
    \n 1 - Celcius para Farenheit \
    \n 2 - Farenheit para Celcius \
    \n 3 - Volume da lata \
    \n 4 - Gasto de combustivél \
    \n ESC - Sair"
<< endl;
}
void cabecalho_resultado (){
    cout << "-----------------------------------" << endl;
    cout << "         R E S U L T A D O         " << endl;
    cout << "-----------------------------------" << endl;
}
void cabecalho_seccao(string titulo){
    cout << "-----------------------------------" << endl;
    cout << "            "<< titulo <<"         " << endl;
    cout << "-----------------------------------" << endl;
}
void calculando(){
    cout << "Calculando... " << endl;
    Sleep(2000);
    system("cls");
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    // VARIAVEIS EXERCÍCIO TEMPERATURA
    double celcius, farenheit;
    // VARIAVEIS EXERCÍCIO VOLUME
    double raio,altura,volume,pi = 3.14159;
    // VARIAVEIS EXERCICIO COMBUSTIVEL
    double tempo, distancia, combustivel, velocidade , km_litros = 12;
    char tecla = '0';
    while (tecla != 27) {
        menu();
        tecla=getch();
        switch(tecla){
            case '1':
                system("cls");
                cabecalho_seccao("CONVERSÃO");
                cout << "Temperatura em Celcius: ";
                cin >> celcius;
                farenheit = (9*celcius + 160)/5;
                calculando();
                cabecalho_resultado();
                cout << celcius << "ºC é igual a " << farenheit << "°F" << endl;
                Sleep(5000);
                break;
            case '2':
                system("cls");
                cabecalho_seccao("CONVERSÃO");
                cout << "Temperatura em Farenheit: ";
                cin >> farenheit;
                celcius = (farenheit-32)*5/9;
                calculando();
                cabecalho_resultado();
                cout << farenheit << "°F é igual a " << celcius << "°C" << endl;
                Sleep(5000);
                break;
            case '3':
                system("cls");
                cabecalho_seccao("VOLUME DA LATA");
                cout << "Digite o raio da lata: ";
                cin >> raio;
                cout << "Digite a altura da lata: ";
                cin >> altura;
                volume = pi * pow(raio,2) * altura;
                calculando();
                cout << fixed;
                cout.precision(2);
                cabecalho_resultado();
                cout << "O volume da lata é: " << volume << "cm³" << endl;
                Sleep(5000);
                break;
            case '4':
                system("cls");
                cabecalho_seccao("COMBUSTÍVEL");
                cout << "Quanto tempo você gastou na viagem? (em horas) ";
                cin >> tempo;
                cout << "Qual foi a velocidade média da viagem ? (Km/h) ";
                cin >> velocidade;
                distancia = tempo*velocidade;
                combustivel = distancia/km_litros;
                calculando();
                cabecalho_resultado();
                cout << "Tempo gasto: " << tempo << " horas" << endl;
                cout << "Distância percorrida: " << distancia << " Km" << endl;
                cout << "Velocidade média: " << velocidade << " Km/h" << endl;
                cout << "Quantidade de combustivél utilizado: " << combustivel << " litros" << endl;
                Sleep(7000);
                break;
            case 27:
                system("cls");
                cout << "Você escolheu sair do sistema" << endl;
                cout << "Saindo ..." << endl;
                break;
            default:
                system("cls");
                cout << "Por favor, digite uma das opções listadas no menu" << endl;
                Sleep (3000);
                cout << "Retornando ao menu para que possa escolher novamente ... " << endl;
                Sleep (3000);
        }
    }
return 0;
}

