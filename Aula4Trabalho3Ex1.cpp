#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <cctype>


using namespace std;

/*
Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir, multiplicar.
Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma. 
Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração. 
Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão. 
Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o resultado da multiplicação. 
Se o usuário quiser sair do programa informará (S).
Para qualquer outro caso o computador deverá informar (Opção inválida).
*/

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    char operacao;
    float n1, n2, soma, subtracao, divisao, multiplicacao;

    cout << "Digite - + - para SOMAR \n";
    cout << "Digite - - - para SUBTRAIR \n";
    cout << "Digite - / - para DIVIDIR \n";
    cout << "Digite - * - para MULTIPLICAR \n";
    cout << "Digite - S - para SAIR" << endl << endl;
    cin >> operacao;
    
    operacao = toupper(operacao);

    switch (operacao) {

        case '+':
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            soma = n1+n2;
            
            cout << endl << "A soma entre os números é: " << soma;
            
            break;

        case '-':
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            subtracao = n1-n2;
            
            cout << endl << "A subtração entre os números é: " << subtracao;
            break;

        case '/':
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            divisao = n1/n2;
            
            cout << endl << "A divisão entre os números é: " << divisao;            
            break;

        case '*':
            
            cout << endl << "Qual o primeiro número? ";
            cin >> n1;
            
            cout << endl << "Qual o segundo número? ";
            cin >> n2;
            
            multiplicacao = n1*n2;
            
            cout << endl << "A multiplicação entre os números é: " << multiplicacao;            
            break;
            
        case 'S':
            
            break;

        default:
            cout << endl <<  "Não temos essa opção!";
    }
}



