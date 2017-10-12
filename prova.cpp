#include "iostream"
#include "cstdlib"
#include "math.h"
#include "windows.h"

#define pi 3.14

using namespace std;
//FUNÇÕES
float ler_altura(){
      float alt;
      cout << "Digite um valor de altura: ";
      cin >> alt;
      return alt;
}
float diametro (float altura){
      float diam;
      diam = altura/3;
      return diam;
}
float raio (float diametro){
      float rai;
      rai = diametro/2;
      return rai;
}
float areaBase(float raio){
      float areab;
      areab = pow(raio,2)*pi;
      return areab;
}
float volume (float areab, float altura){
      float vol;
      vol = areab*altura;
      return vol;
}
int telaentrada(){
    int tecla;
    cout << "1 - Ler altura" << endl;
    cout << "2 - Realizar calculos" << endl;
    cout << "3 - Relatório" << endl;
    cout << "4 - Sair" << endl;
    cout << "Opção: ";
    cin >> tecla;
return tecla;
}
//PROCEDIMENTOS
void relatorio(float altura, float diametro, float raio, float areabase,float volume){
    cout << "IMPRESSÃO DE RESULTADOS" << endl;
    cout << "Altura: " << altura << endl;
    cout << "Diametro: " << diametro << endl;
    cout << "Raio: " << raio << endl;
    cout << "Area da base: " << areabase << endl;
    cout << "Volume : " << volume << endl;
}
//FUNÇÃO
int controle(){
    float altu=0,dia=0,rai=0,areab=0,vol=0;
    int tecla = -1;
    while (tecla != 4){
          tecla = telaentrada();
          switch (tecla){
                 case 1:
                      altu = ler_altura();
                 break;
                 case 2:
                      dia = diametro(altu);
                      rai = raio(dia);
                      areab = areaBase(rai);
                      vol = volume(areab,altu);
                      cout << "Calculando ..." << endl;
                      Sleep(2000);
                 break;
                 case 3:
                      relatorio(altu,dia,rai,areab,vol);
                 break;
                 case 4:
                      cout << "Você escolheu sair do sistema" << endl;
                      system("pause");
                 break;
                 default:
                    cout << "Escolha uma opção válida" << endl;
                 break;
          }
    }

}
int main(){
    setlocale(LC_ALL, "Portuguese");
    controle();
    return 0;
}
