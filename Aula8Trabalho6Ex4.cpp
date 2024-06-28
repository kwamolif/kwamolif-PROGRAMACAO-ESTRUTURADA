#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

/*
Escreva um programa em C++  para armazenar notas das P1 e P2 de 15 alunos (2 vetores). Calcular a média e armazenar em outro vetor. 
Verificar também a situação do aluno (Aprovado ou Reprovado).
Imprimir as notas, a média e situação de cada aluno
*/


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i;
    double p1[5], p2[5], mediaf[5];
    string situacao[5];

    for (i = 1; i < 6; i++) {

        cout << "Digite a nota da P1 do aluno " << i << ":";
        cin >> p1[i];
        cout << "Digite a nota da P2 do aluno " << i << ":";
        cin >> p2[i];

        mediaf[i] = ((p1[i] + p2[i]) / 2);

        if (mediaf[i] > 6) {

            situacao[i] = "APROVADO!";
        }

        if (mediaf[i] < 6) {

            situacao[i] = "REPROVADO!";
        }

        cout << endl << endl;
    }

    cout << endl << endl;

    cout << "A situação dos alunos: ";

    cout << endl << endl;

    for (i = 1; i < 6; i++) {

        cout << "Aluno " << i << ": P1 = " << p1[i] << " P2 = " << p2[i] << endl;
        cout << "Media = " << mediaf[i] << endl;
        cout << situacao[i] << endl << endl;
    }
}