#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>



using namespace std;

// Faça um programa que defina uma variável como unsigned.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    unsigned int idade;
    
    cout << "Informe sua idade: ";
    cin >> idade;
    
    cout << "A sua idade é: " << idade << " anos.";
    
}



