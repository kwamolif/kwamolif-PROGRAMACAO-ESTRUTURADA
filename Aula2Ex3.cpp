#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

using namespace std;

// Este programa realiza algumas operações matemáticas.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    float n1, n2, n3, soma, subtracao, divisao, multiplicacao;
    int resto, n4, n5;
    
    cout << "Este programa realiza algumas operações matemáticas. ";
    cout << "Preciso que digite 5 números." << endl << endl;
    cout << "Digite o primeiro número: ";
    cin >> n1;      
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;
    cout << "Digite o quarto número: ";
    cin >> n4;
    cout << "Digite o quinto número: ";
    cin >> n5;
    
    soma = n1+n2;
    cout << "A soma do primeiro número com o segundo é: " << soma << endl;
    
    subtracao = n3-n1;
    cout << "A subtração do terceiro número com o primeiro é: " << subtracao << endl;
    
    divisao = n2/n1;
    cout << "A divisão do segundo número com o primeiro é: " << setprecision(2) << divisao << endl;
    
    multiplicacao = n1*n2 ;
    cout << "A multiplicação do primeiro número com o segundo é: " << multiplicacao << endl;
    
    resto =  n4%n5;
    cout << "O resto do quarto número com o quinto é: " << resto << endl;
}

