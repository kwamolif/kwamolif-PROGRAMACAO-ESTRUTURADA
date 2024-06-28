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

    arquivo.open("Aula9Ex6.txt");

    arquivo << "Ivan" << endl;
    arquivo << "Kawam" << endl;

    arquivo.close();

}



