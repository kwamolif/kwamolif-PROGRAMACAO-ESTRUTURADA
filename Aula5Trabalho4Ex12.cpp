#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

using namespace std;

/*
Construir um programa que calcule a média aritmética de 20 valores inteiros positivos, fornecidos pelo usuário. Exiba o resultado da média. 
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    unsigned int i = 1;
    float soma = 0, numero, media;


    cout << "                --- CALCULADORA DE MÉDIA ---                  " << endl << endl;


    while (i <= 20) {

        cout << "Digite um número inteiro e positivo: ";
        cin >> numero;

        soma += numero;

        i++;

    }

    cout << fixed << setprecision(2);

    media = (soma / 20);

    cout << endl << endl << "A média dos 20 números digitados é " << media << endl << endl;

}