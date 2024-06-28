#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>



using namespace std;

/*
Escreva um programa em C++ que exiba as quatro mensagens:
Meu nome é: <seu nome>.
Sou do curso de Sistemas de Informação.
Estou no primeiro ano.
Gosto de programação!!!
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    cout << endl << "Meu nome é: Kawam.";
    cout << endl << "Sou do curso de Sistemas de Informação.";
    cout << endl << "Estou no primeiro ano.";
    cout << endl << "Gosto de programação!!!";
     
}

