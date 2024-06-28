#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

//Escreva um programa para exibir os números contidos no intervalo de 10 a 100

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i = 10;

    cout << "--- ABAIXO TEMOS OS NÚMEROS CONTIDOS NO INTERVALO DE 10 A 100 ---" << endl << endl;

    while (i <= 100) {

        cout << i << endl;
        i++;
    }
}



