#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;


//Escreva um programa para determinar o maior de três números dados.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    cout << "Esse programa recebe três números e retorna o maior deles." << endl << endl;

    cout << endl << "Digite o primeiro número: ";
    cin >> n1;

    cout << endl << "Digite o segundo número: ";
    cin >> n2;

    cout << endl << "Digite o terceiro número: ";
    cin >> n3;


    if (n1 > n2 && n1 > n3) {

        cout << endl << n1 << " é o maior número.";

    }

    if (n2 > n1 && n2 > n3) {

        cout << endl << n2 << " é o maior número.";

    }

    if (n3 > n1 && n3 > n2) {

        cout << endl << n3 << " é o maior número.";

    }
}