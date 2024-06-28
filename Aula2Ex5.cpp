#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

// Este programa realiza algumas operações relacionais.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    int n1, n2, n3;
    bool resultado;
    
    cout << "Este programa realiza algumas operações relacionais. ";
    cout << "Preciso que digite 3 números." << endl;
    cout << "Digite os número: " << endl;
    cin >> n1 >> n2 >> n3;
    
    resultado = n1 > n2;
    cout << "O resultado da operação - número 1 é maior que o número 2, é: " << resultado << endl;
    
    resultado = n2 == n3;
    cout << "O resultado da operação - número 2 é igual ao número 3, é: " << resultado << endl;
    
    resultado = n3 != n1;
    cout << "O resultado da operação - número 3 é diferente do número 2, é: " << resultado << endl;   
}

