#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <cctype>


using namespace std;

//Esse programa mostra um menu de opções e exibe o preço do bolo escolhido, utilizando switch case.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    char bolo;

    cout << "Digite - A - para um BOLO DE AMENDOIM \n";
    cout << "Digite - B - para um BOLO DE BANANA \n";
    cout << "Digite - C - para um BOLO DE CHOCOLATE \n";
    cout << "Digite - F - para um BOLO DE FUBÁ \n";
    cout << "Digite - L - para um BOLO DE LIMÃO" << endl << endl;
    cin >> bolo;

    bolo = toupper(bolo);

    switch (bolo) {

        case 'A':
            cout << endl << "O BOLO DE AMENDOIM está saindo por: R$13 reais";
            break;

        case 'B':
            cout << endl << "O BOLO DE BANANA está saindo por: R$17 reais";
            break;

        case 'C':
            cout << endl << "O BOLO DE CHOCOLATE está saindo por: R$14 reais";
            break;

        case 'F':
            cout << endl << "O BOLO DE FUBÁ está saindo por: R$12 reais";
            break;

        case 'L':
            cout << endl << "O BOLO DE LIMÃO está saindo por: R$15 reais";
            break;

        default:
            cout << "Não temos essa opção!";
    }
}



