#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

/*
Escrever um programa em C++ para calcular o IMC de uma pessoa (utilize função para fazer o programa). IMC = peso / altura^2.
*/

using namespace std;

float imc(float peso, float altura) {

    return (peso / (altura * altura));
}

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    float peso, altura;

    cout << "Programa para calcular o IMC de uma pessoa";
    cout << endl << endl;

    cout << "Digite o peso: ";
    cin >> peso;

    cout << "Digite a altura: ";
    cin >> altura;

    cout << endl << endl;

    cout << "O IMC é: " << setprecision(2) << imc(peso, altura);
}