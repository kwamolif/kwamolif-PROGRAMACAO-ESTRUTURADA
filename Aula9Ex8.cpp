#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <fstream>

/*
 * Faça um programa que use for e salve o texto no arquivo e mostre no terminal.
 */

using namespace std;

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    ofstream arquivo;
    int i;

    arquivo.open("Aula9Ex8-FOR.txt", ios::app);

    for (i = 0; i <= 10; i++) {

        arquivo << "Você está salvando dados de: " << i << endl;
        cout << "Você está salvando dados de: " << i << endl;
    }
    arquivo.close();
}



