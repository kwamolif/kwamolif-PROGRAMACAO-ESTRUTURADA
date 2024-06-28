#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Escreva um programa para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros) e escrever se é par ou ímpar.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    unsigned int numero;

    cout << "                --- TESTADOR DE PAR OU ÍMPAR ---                  " << endl << endl;


    cout << "Digite um número, inteiro e positivo, e direi se ele é ímpar ou par: ";
    cin >> numero;
    

    if ((numero % 2) == 0) {

        cout << endl << "O número " << numero << " é par." << endl;

    }
    else {

        cout << endl << "O número " << numero << " é ímpar." << endl;

    }

}

