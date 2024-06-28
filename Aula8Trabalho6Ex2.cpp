#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++  para armazenar 8 números em um vetor e imprimir todos os números. Verifique quantos desses números são múltiplos de 3. Imprima essa quantidade.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, multiplos=0, vetor[8];

    for (i = 0; i < 8; i++) {

        cout << "Digite o " << i << "° valor:";
        cin >> vetor[i];

        if ((vetor[i] % 3) == 0) {

            multiplos++;
        };
    }

    cout << endl;
    cout << "Os valores digitados são: ";

    for (i = 0; i < 8; i++) {

        cout << vetor[i] << " - ";
    }

    cout << endl << endl;
    cout << "Foram digitados " << multiplos << " números múltiplos de 3." << endl << endl;
}



