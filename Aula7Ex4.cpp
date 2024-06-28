#include <cstdlib>
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

/*
Faça um programa que recolha 5 notas, do tipo float, de um aluno e armazene em um vetor com tamanho desconhecido. Após isso, faça a média delas.
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    const int tamanho = 5;
    int i = 0, j;
    float notas[tamanho], soma = 0.0, media = 0.0;

    cout << setprecision(2);

    do {
        if (i >= tamanho) {

            cout << endl << endl << "BUFFER LOTADO" << endl;
            i++;
            break;
        }

        cout << "Digite a nota do aluno: ";
        cin >> notas[i];

    } while (notas[i++] >= 0);

    i--;

    for (j = 0; j < i; j++) {


        soma += notas[j];
    }

    media = (soma / i);

    cout << endl << endl << "A média das notas é: " << media << endl << endl;

}

