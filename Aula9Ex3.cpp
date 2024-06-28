#include <cstdlib>
#include <cstring>
#include <iostream>

/*
 * Faça um programa que troque o valor de duas variáveis usando uma função
 */

using namespace std;

float capacidade(float, float, float);

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    float comprimento, largura, altura;

    cout << "Programa para calcular a capacidade de água de uma piscina: " << endl << endl;

    cout << "Digite o comprimento da piscina: ";
    cin >> comprimento;

    cout << "Digite a largura da piscina: ";
    cin >> largura;

    cout << "Digite a altura da piscina: ";
    cin >> altura;

    cout << "A piscina possui: " << capacidade(comprimento, largura, altura) << " metros cúbicos." << endl;

}

float capacidade(float comprimento, float largura, float altura) {

    float resultado;

    resultado = comprimento * largura * altura;

    return resultado;
}

