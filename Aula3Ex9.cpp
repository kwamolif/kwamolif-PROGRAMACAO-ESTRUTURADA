#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

//Escreva um programa para exibir os números divisíveis por 10 contidos no intervalo de 1 a 100.
//Utilize a estrutura while.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i = 1;

    while (i <= 100) {

        if (i % 10 == 0) {

            cout << i << endl;
        }

        i = i + 1;

    }
    cout << endl << "TODOS OS NÚMEROS ACIMA SÃO DIVISIVEIS POR 10!!!";
}
