#include <cstdlib>
#include <cstring>
#include <iostream>

/*
 * Faça um programa que use prótotipo
 */

using namespace std;

void troca(int &a, int &b) {

    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int a, b;

    cout << "Entre dois números: ";
    cin >> a >> b;

    cout << "Você entrou com " << a << " e " << b << endl;

    troca(a, b);

    cout << "Trocados, eles são " << a << " e " << b << endl;

}

