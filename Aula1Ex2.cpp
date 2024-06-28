

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
 Esse programa faz a média de duas notas 
 */

int main(int argc, char** argv) {
    
    setlocale (LC_ALL, "Portuguese");
    int nota1, nota2, mediafinal;
    cout << "Digite a primeira nota:";
    cin >> nota1;
    cout << "Digite a segunda nota:";
    cin >> nota2;
    mediafinal = (nota1 + nota2) / 2;
    cout << "A média final é: " << mediafinal << "\n";
}

