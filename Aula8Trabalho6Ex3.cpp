#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++ para receber números para preencher dois vetores de tamanho 10. Imprima os vetores. Faça a multiplicação de um por outro e imprima o resultado da multiplicação.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, vetor1[10], vetor2[10], vetorresultado[10];

    for (i = 0; i < 10; i++) {

        cout << "Digite o " << i << "° valor do VETOR 1:";
        cin >> vetor1[i];
    }

    cout << endl << endl;

    for (i = 0; i < 10; i++) {

        cout << "Digite o " << i << "° valor do VETOR 2::";
        cin >> vetor2[i];
    }

    cout << endl;
    cout << "Os valores digitados no VETOR 1 são: ";

    for (i = 0; i < 10; i++) {

        cout << vetor1[i] << " - ";
    }

    cout << endl;
    cout << "Os valores digitados no VETOR 2 são: ";

    for (i = 0; i < 10; i++) {

        cout << vetor2[i] << " - ";
    }

    cout << endl;
    cout << "Os valores dos vetores multiplicados são: ";

    for (i = 0; i < 10; i++) {

        vetorresultado[i] = vetor1[i] * vetor2[i];
        cout << vetorresultado[i] << " - ";
    }

    cout << endl << endl;
}



