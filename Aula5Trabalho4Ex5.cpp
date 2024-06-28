#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Escreva um programa para ler um valor e escrever se é positivo ou negativo. 
Considere o valor zero como positivo.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    float numero;

    cout << "--- DIGITE UM NÚMERO PARA SABER SE ELE É POSITIVO OU NEGATIVO ---" << endl << endl;

    cout << "Qual o número? " << endl;
    cin >> numero;

    if (numero >= 0) {

        cout << endl << endl << "O NÚMERO É POSITIVO" << endl;
    } else {
        cout << endl << endl << "O NÚMERO É NEGATIVO" << endl;
    }
}

