#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Faça um programa que para preencher e mostrar os dados de uma matriz.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");


    int matriz[2][3], i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {

            cout << "Digite o valor para preencher a posição [" << i << ", " << j << "]:";
            cin >> matriz[i][j];
        }
    }
    
    cout << endl;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {

            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

