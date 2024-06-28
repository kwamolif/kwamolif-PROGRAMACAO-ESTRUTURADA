#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>
#include <fstream>

/*
Escrever um programa em C++ para calcular o IMC de N pessoas. Para cada pessoa deverá ser solicitado o nome, peso e altura.
(utilize função e struct para fazer o programa). IMC = peso / altura2. 
Além de mostrar os dados na tela, o programa também deverá armazenar o IMC de cada pessoa em um arquivo.txt.
 */

using namespace std;

float imc(float peso, float altura) {

    return (peso / (altura * altura));
}

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, x;
    float peso, altura;

    struct DadosIMC {
        char nome[50];
        float peso, altura;
    } strIMC[x];

    cout << "Programa para calcular o IMC de uma pessoa";

    cout << endl << endl;

    cout << "Quantos IMCs você vai calcular? ";
    cin >> x;

    cin.ignore();

    cout << endl << endl;
    
    ofstream arquivo;
    
    arquivo.open("Aula8Trabalho6Ex13-IMCs.txt", ios::app);

    for (i = 1; i <= x; i++) {

        cout << "INFORME O NOME DO CLIENTE: ";
        cin.getline(strIMC[i].nome, 50);

        cout << endl;

        cout << "INFORME O PESO DO CLIENTE: ";
        cin >> peso;

        cin.ignore();

        cout << endl;

        cout << "INFORME A ALTURA DO CLIENTE: ";
        cin >> altura;

        cin.ignore();

        cout << endl;
        
        arquivo << "O IMC do cliente " << strIMC[i].nome << " é: " << setprecision(2) << imc(peso, altura);

        arquivo << endl << endl;
    }
}