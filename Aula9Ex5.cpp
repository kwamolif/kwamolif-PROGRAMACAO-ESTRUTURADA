#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

/*
 * Faça um programa que use função recursiva para calcular o fatorial de qualquer número
 */

using namespace std;

int fatorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(int argc, char** argv) {

    int n;

    cout << "Deseja saber o fatorial de qual número? ";
    cin>> n;

    cout << "O fatorial de " << n << " é igual a " << fatorial(n) << endl;
}



