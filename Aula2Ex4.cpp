#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>


using namespace std;

// Este programa realiza algumas operações lógicas.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    bool n1, n2;
    
    cout << "Este programa realiza algumas operações lógicas. ";
    cout << "Preciso que digite 2 números." << endl << endl;
    cout << "Digite os número: ";
    cin >> n1 >> n2;      
    
    cout << "A negação do primeiro número é: " << !n1 << endl;
    
    cout << "A negação do segundo número é: " << !n2 << endl;
    
    cout << "A operação AND entre o primeiro número e o segundo é: " << (n1 && n2) << endl;
    
    cout << "A operação OR entre o primeiro número e o segundo é: " << (n1 || n2) << endl;   
}