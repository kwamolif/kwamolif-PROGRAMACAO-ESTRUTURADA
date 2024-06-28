#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Faça um programa que  armazene 15 números inteiros em um vetor e exiba-os informando se é par ou ímpar.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");


    int numeros[15], i, resto;

    for (i = 0; i < 15; i++) {

        cout << "Digite o número da posição " << i << ": ";
        cin >> numeros[i];
    }
    
    cout << endl;
    
    for (i = 0; i < 15; i++) {

        resto = numeros[i] % 2;

        if (resto == 0) {

            cout << "O número da posição " << i << " é: " << numeros[i] << ". Ele é PAR" << endl;
        }

        if (resto != 0) {

            cout << "O número da posição " << i << " é: " << numeros[i] << ". Ele é ÍMPAR" << endl;
        }
    }
}

