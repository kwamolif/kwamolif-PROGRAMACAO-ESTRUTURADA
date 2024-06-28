#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Escrever um programa que leia 15 números, um de cada vez, e conte quantos destes valores são negativos. Exiba a quantidade de números negativos digitados. 
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i = 1, cont = 0;
    float numero;


    cout << "                --- CONTADOR DE VALORES NEGATIVOS ---                  " << endl << endl;


    while (i <= 15) {

        cout << "Digite um número: ";
        cin >> numero;
        i++;

        if (numero < 0) {

            cont++;

        }

    }

    cout << endl << endl << "Foram digitados " << cont << " números negativos.";

}


