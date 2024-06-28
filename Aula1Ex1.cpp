

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
 Esse programa faz a soma de 3 números 
 */

int main(int argc, char** argv) {
    
    setlocale (LC_ALL, "Portuguese");
    int n1, n2, n3;
    int resultadopreliminar, resultadofinal;
    cout << "Esse programa faz a soma de 3 números. \n";
    cout << "Digite o primeira número a ser somado: \n";
    cin >> n1;
    cout << "Digite o segundo número a ser somado: \n";
    cin >> n2;
    resultadopreliminar = n1 + n2;
    cout << "Digite o terceiro número a ser somado: \n";
    cin >> n3;
    resultadofinal = resultadopreliminar + n3;
    cout << "O resultado da soma é: " << resultadofinal << "\n";
}

