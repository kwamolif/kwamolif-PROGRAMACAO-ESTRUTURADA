#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Faça um programa que solicite o nome do completo do usuário
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    string nome;

    cout << "Olá, vamos conversar? " << endl << endl;

    cout << "Qual é o seu nome completo? ";
    getline(cin, nome);

    cout << endl << endl << "Nossa, " << nome << ", que nome feio." << endl << endl;
}

