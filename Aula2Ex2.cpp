#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

// Este programa mostra seu nome, naturalidade e idade.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    char nome[30], naturalidade[20];
    int idade;
    
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "\nDigite sua naturalidade: ";
    cin >> naturalidade;
    cout << "\nDigite sua idade: ";
    cin >> idade;
    
    cout << "\nSeu nome é " << nome << ", nasceu em " << naturalidade << " e têm " << idade << " anos \n"; 
}
