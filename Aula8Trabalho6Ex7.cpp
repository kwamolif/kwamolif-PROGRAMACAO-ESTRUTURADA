#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++ que receba números e os armazene em uma matriz 4X4. Imprima a matriz.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int matriz[6][6], i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {

            cout << "Digite o valor para preencher a posição [" << i << ", " << j << "]:";
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    cout << "Os valores da matriz são: " << endl;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {

            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Os valores da diagonal secundária são:" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << matriz[i][5 - i] << "\t";
    }
    cout << endl;
}


