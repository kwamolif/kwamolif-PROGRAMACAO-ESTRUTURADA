#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <fstream>

/*
 * Faça um programa que leia as linhas de um arquivo de texto.
 */

using namespace std;

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    string abc;

    ifstream arquivo("Aula9Ex8-FOR.txt");

    if (arquivo.is_open()) {

        while (!arquivo.eof()) {

            getline(arquivo, abc);
            cout << abc << endl;
        }
        arquivo.close();
    } else {

        cout << "ERRO! O ARQUIVO NÃO FOI CRIADO OU NÃO EXISTE";
    }
}



