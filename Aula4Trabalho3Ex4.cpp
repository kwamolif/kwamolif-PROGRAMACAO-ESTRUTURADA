#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

//Escreva um programa para exibir os números contidos no intervalo de 50 a 10


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i = 50;

    cout << "--- ABAIXO TEMOS OS NÚMEROS CONTIDOS NO INTERVALO DE 50 A 10 ---" << endl << endl;

    while (i >= 10) {

        cout << i << endl;
        i--;
    }
}




