#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Elabore um algoritmo para gerar duas matrizes MxN. Calcule e imprima a matriz soma.​
 */


int main() {
    const int max = 100;
    int m, n, matriz_a[max][max], matriz_b[max][max], matrizsoma[max][max];

    cout << "Digite o número de linhas (m) da matriz: ";
    cin >> m;
    cout << "Digite o número de colunas (n) da matriz: ";
    cin >> n;
    
    cout << endl << endl;

    cout << "Digite os elementos da primeira matriz" << endl << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Digite o número na posição [" << i << "][" << j << "]: ";
            cin >> matriz_a[i][j];
        }
    }

    cout << endl;

    cout << "Digite os elementos da segunda matriz" << endl << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Digite o número na posição [" << i << "][" << j << "]: ";
            cin >> matriz_b[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrizsoma[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }

    cout << endl;
    
    cout << "A matriz soma é:" << endl << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrizsoma[i][j] << " ";
        }
        cout << endl;
    }
}

