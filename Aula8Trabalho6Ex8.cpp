#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++ que receba do usuário números reais e preencha uma matriz 4x5. 
Gere e armazene em uma outra matriz a metade da primeira (a metade de cada número armazenado na matriz original). 
Imprima as duas matrizes.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, j;
    float inteira[4][5], metade[4][5];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {

            cout << "Digite um valor para a posição " << i << ", " << j << " da matriz: ";
            cin >> inteira[i][j];
        }
    }

    cout << endl;
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            
        metade[i][j] = (inteira[i][j]/2);    
            
        }
    }
    

    cout << "Os valores da matriz inteira são: " << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {

            cout << inteira[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Os valores da matriz metade são: " << endl;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {

            cout << metade[i][j] << "\t";
        }
        cout << endl;
    }
}