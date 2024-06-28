#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++  que seja capaz de criar um vetor contendo os seguintes números, nessa ordem: 10,9,8,7,6,5,4,3,2,1. Exiba o vetor e também a ordem inversa desse vetor.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    cout << "Os valores do vetor são: " << endl;

    for (i = 0; i < 10; i++) {

        cout << vetor[i] << " - ";
    }
    
    cout << endl << endl;

    cout << "Os valores do vetor na ordem inversa são: " << endl;

    for (i = 9; i >= 0; i--) {

        cout << vetor[i] << " - ";
    }
}