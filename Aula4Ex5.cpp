#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>
#include <cmath>


using namespace std;

// Faça um programa que use a biblioteca cmath e algumas funções dela.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int base, potencia, lado, raiz, raio;
    float resultado;
    
    cout << "--- PROGRAMA DE OPERAÇÕES MATEMÁTICAS ---" << endl << endl;
    
    cout << "Digite dois números, o primeiro será a base e o segundo será a potência: ";
    cin >> base >> potencia;
    
    resultado = pow(base,potencia);
    
    cout << "O resultado de " << base << " elevado a " << potencia << " é: " << setprecision(2) << resultado << endl << endl;
    
    cout << "Digite o valor do lado de um quadrado: ";
    cin >> lado;
    
    resultado = pow(lado,2);
    
    cout << "A área do quadrado é: " << setprecision(2) << resultado << endl << endl;
    
    cout << "Digite um número: ";
    cin >> raiz;
    
    resultado = sqrt(raiz);
    
    cout << "A raiz quadrada de " << raiz << " é: " << setprecision(2) << resultado << endl << endl;
    
    cout << "Digite o valor do lado de um cubo: ";
    cin >> lado;
    
    resultado = pow(lado,3);
    
    cout << "A área do cubo é: " << setprecision(2) << resultado << endl << endl;
    
    cout << "Digite o valor do raio de uma circunferência: ";
    cin >> raio;
    
    resultado = M_PI*(raio*2);
    
    cout << "A área da circunferência é: " << setprecision(2) << resultado << endl << endl;
    
}



