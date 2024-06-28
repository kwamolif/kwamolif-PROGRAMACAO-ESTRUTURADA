#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++ para armazenar 10 números em um vetor. Imprima os números do vetor. Calcule e imprima a soma desses números.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, soma = 0, vetor[10];

    for (i = 0; i < 10; i++) {

        cout << "Digite o " << i << "° valor:";
        cin >> vetor[i];

        soma += vetor[i];
    }

    cout << endl;
    cout << "Os valores digitados são: ";

    for (i = 0; i < 10; i++) {

        cout << vetor[i] << " - ";
    }

    cout << endl;
    cout << "A soma dos valores digitados é: " << soma << endl << endl;
}



