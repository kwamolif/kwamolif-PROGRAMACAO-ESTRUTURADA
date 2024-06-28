#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

//Faça um programa para ler o primeiro nome e o ano de nascimento, de 5 pessoas (uma de cada vez). Calcular a soma das cinco idades lidas, exibir o resultado.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i = 5, somaidades = 0, idade, anonasc;
    char nome[30];

    cout << "--- ESSE PROGRAMA PEDE O PRIMEIRO NOME E O ANO DE NASCIMENTO DE 5 PESSOAS E MOSTRA A SOMA DA IDADE DE TODOS ---" << endl << endl;


    while (i >= 1) {

        cout << "Qual seu primeiro nome? ";
        cin >> nome;

        cout << "Qual seu ano de nascimento? ";
        cin >> anonasc;

        idade = 2024 - anonasc;

        somaidades += idade;

        i--;

    }

    cout << endl << "A soma de todas as idades é: " << somaidades << " anos.";

}





