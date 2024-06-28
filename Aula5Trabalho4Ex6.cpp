#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Reescreva o programa do exercício anterior (exercício 5) considerando o zero como neutro.
Se for digitado o valor zero, escrever a palavra zero. 
*/

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    float numero;

    cout << "--- DIGITE UM NÚMERO PARA SABER SE ELE É POSITIVO, NEGATIVO OU ZERO ---" << endl << endl;

    cout << "Qual o número? " << endl;
    cin >> numero;
    
    if (numero == 0) {

        cout << endl << endl << "O NÚMERO É O ZERO" << endl;
    }

    if (numero > 0) {

        cout << endl << endl << "O NÚMERO É POSITIVO" << endl;
    }
    
    if (numero < 0) {
       
        cout << endl << endl << "O NÚMERO É NEGATIVO" << endl;
    }
}

