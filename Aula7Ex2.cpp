#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Faça um programa que recolha 5 notas, do tipo int, de um aluno e armazene em um vetor. Após isso, faça a média delas.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, notas[5], soma = 0, media = 0;

    for (i = 0; i < 5; i++) {

        cout << "Digite a nota do aluno: ";
        cin >> notas[i];
        soma += notas[i];
    }

    media = (soma / 5);

    cout << endl << endl << "Média das notas: " << media << endl << endl;

}

