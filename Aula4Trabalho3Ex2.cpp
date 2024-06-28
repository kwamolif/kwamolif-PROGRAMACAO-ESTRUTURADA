#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

/*
Faça um programa para ler N números inteiros – informe um de cada vez. 
A repetição será encerrada quando o usuário digitar o número 0. 
O programa deve informar quantos números foram digitados. 
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i, cont = 0;

    while (i != 0) {

        cout << "Digite um número inteiro: ";
        cin >> i;
        cont++;

    }

    if (cont == 1) {

        cout << endl << "Foi digitado " << cont << " número.";

    }
    else {

        cout << endl << "Foram digitados " << cont << " números.";

    }



}



