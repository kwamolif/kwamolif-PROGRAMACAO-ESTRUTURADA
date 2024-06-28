#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

/*
Faça um programa que recolha 5 notas, do tipo float, de um aluno e armazene em um vetor. Após isso, faça a média delas.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    const int tamanho = 5;
    int i;
    float notas[tamanho], soma = 0.0, media = 0.0;

    cout << setprecision(2);

    for (i = 0; i < tamanho; i++) {

        cout << "Digite a nota do aluno: ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = (soma / tamanho);

    cout << endl << endl << "A média das notas é: " << media << endl << endl;

}

