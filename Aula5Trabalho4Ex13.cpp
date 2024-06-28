#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

using namespace std;

/*
Escreva um programa que receba 20 números do usuário (um de cada vez). Calcule a média dos números pares digitados.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    unsigned int i = 1, contpar = 0, numero;
    float somapares, mediapares;


    cout << "                --- CALCULADORA DE MÉDIA ---                  " << endl << endl;


    while (i <= 20) {

        cout << "Digite um número inteiro: ";
        cin >> numero;

        if ((numero % 2) == 0) {

            somapares += numero;
            contpar++;

        }

        i++;

    }

    cout << fixed << setprecision(2);

    mediapares = (somapares / contpar);

    cout << endl << endl << "A média do(s) " << contpar << " números pares é " << mediapares << endl << endl;

}