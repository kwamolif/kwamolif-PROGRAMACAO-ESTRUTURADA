#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++ que receba números e os armazene em uma matriz 4X4. Imprima a matriz.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4], i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            cout << "Digite o valor para preencher a posição [" << i << ", " << j << "]:";
            cin >> matriz[i][j];
        }
    }
    
    cout << endl;
    
    cout << "Os valores da matriz são: " << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

