#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/* 
O usuário deve digitar um número inteiro, entre 1 e 9, para que seja feita a tabuada.
A formatação da tela de execução é importante.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int numero, i = 1;

    cout << "Informe um número para que seja apresentada a Tabuada: ";
    cin >> numero;

    cout << endl << endl << "Tabuada do " << numero << endl;
    cout << "******************" << endl;

    while (i <= 10) {

        cout << i << " X " << numero << " = " << i * numero << endl;
        i++;

    }

    cout << "******************" << endl << endl;
}

