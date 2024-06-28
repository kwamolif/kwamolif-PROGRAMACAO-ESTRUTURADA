#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

// Este programa calcula a sua data de nascimento, com margem de erro de 1 ano.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    const int ano = 2024;
    int nascimento, idade;
    
    cout << "Digite sua idade: ";
    cin >> idade;
    nascimento = ano - idade;
    cout << "Você nasceu em: " << nascimento << "\n" ; 
}
