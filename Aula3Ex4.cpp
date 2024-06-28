#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

//Esse programa mostra um menu de opções e exibe o preço do prato escolhido, utilizando switch case.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int prato;

    cout << "Digite 1 para um PRATO DO DIA! \n";
    cout << "Digite 2 para uma LASANHA! \n";
    cout << "Digite 3 para uma PICANHA GRELHADA! \n";
    cout << "Digite 4 para uma SALADA SIMPLES!" << endl << endl;
    
    cin >> prato;

    switch (prato) {

        case 1:
            cout << endl << "O PRATO DO DIA está saindo por: R$17 reais";
            break;

        case 2:
            cout << endl << "A LASANHA está saindo por: R$17 reais";
            break;

        case 3:
            cout << endl << "A PICANHA GRELHADA está saindo por: R$21,90 reais";
            break;

        case 4:
            cout << endl << "A SALADA SIMPLES está saindo por: R$7,90 reais";
            break;

        default:
            cout << "Não temos essa opção!";
    }
}



