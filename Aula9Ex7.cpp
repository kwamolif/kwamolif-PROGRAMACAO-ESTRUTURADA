#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <fstream>

/*
 * Faça um programa que mostre dois nomes em um arquivo de texto.
 */

using namespace std;

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    ofstream arquivo;

    arquivo.open("Aula9Ex7.txt", ios::app);

    if (arquivo.is_open()) {

        arquivo << "Lorena" << endl;
        arquivo << "Cecilia" << endl;
        arquivo.close();
    } else {

        cout << "ERRO! O ARQUIVO NÃO FOI CRIADO OU NÃO EXISTE";
    }
}



