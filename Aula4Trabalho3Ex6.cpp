#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

//Escreva um programa para calcular a soma dos números pares contidos entre 100 e 200, inclusive exiba o resultado da soma.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int soma = 0, i = 100;

    cout << "--- ESSE PROGRAMA MOSTRA TODOS OS NÚMEROS PARES ENTRE 100 E 200 E A SOMA ENTRE ELES ---" << endl << endl;
    
    cout << "Todos os pares nesse intervalo estão abaixo:" << endl << endl;


    while (i <= 200) {

        cout <<  setw(25) <<  i << endl;
        soma += i;
        i += 2;
    }

    cout << endl << "A soma citada acima é: " << soma << ".";

}



