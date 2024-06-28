#include <cstdlib>
#include <cstring>
#include <iostream>

/*
 * Faça um programa que troque o valor de duas variáveis usando uma váriavel
 */

using namespace std;

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int a, b, temp;

    cout << "Entre dois números: ";
    cin >> a >> b;

    cout << "Você entrou com " << a << " e " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Trocados, eles são " << a << " e " << b << endl;

}

