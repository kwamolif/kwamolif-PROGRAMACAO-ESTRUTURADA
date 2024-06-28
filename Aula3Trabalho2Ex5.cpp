#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir, multiplicar.
Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma. 
Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração. 
Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão. 
Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o resultado da multiplicação. 
Para qualquer outro caso o computador deverá informar (Opção inválida).
*/

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int operacao;
    float n1, n2, soma, subtracao, divisao, multiplicacao;

    cout << "Digite - 1 - para SOMAR \n";
    cout << "Digite - 2 - para SUBTRAIR \n";
    cout << "Digite - 3 - para DIVIDIR \n";
    cout << "Digite - 4 - para MULTIPLICAR" << endl << endl;
    cin >> operacao;

    switch (operacao) {

        case 1:
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            soma = n1+n2;
            
            cout << endl << "A soma entre os números é: " << soma;
            
            break;

        case 2:
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            subtracao = n1-n2;
            
            cout << endl << "A subtração entre os números é: " << subtracao;
            break;

        case 3:
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            divisao = n1/n2;
            
            cout << endl << "A divisão entre os números é: " << divisao;            
            break;

        case 4:
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            multiplicacao = n1*n2;
            
            cout << endl << "A multiplicação entre os números é: " << multiplicacao;            
            break;

        default:
            cout << endl <<  "Não temos essa opção!";
    }
}



