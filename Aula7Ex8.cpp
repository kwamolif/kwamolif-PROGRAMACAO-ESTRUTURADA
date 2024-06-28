#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Elabore um algoritmo que receba números e os armazene em uma matriz M x M. Imprima apenas os números da diagonal principal.​
 */


int main() {
    const int max = 100;
    int m,matriz[max][max];
    
    cout << "Digite o tamanho da matriz M x M: ";
    cin >> m;

    cout << endl;

    cout << "Digite os elementos da matriz" << endl << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Digite o número na posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << endl;

    cout << "A matriz apenas com os números da diagonal principal é:" << endl << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                cout << matriz[i][j] << " \t";
            } else {
                cout << " \t";
            }
        }
        cout << endl;
    }
}

