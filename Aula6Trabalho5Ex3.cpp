#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>



using namespace std;

/* 
O usuário deve digitar um valor de 1 até 5 para escolher uma das opções (Somar, Subtrair, Dividir, Multiplicar ou Sair). 
Escolhendo uma das opções matemáticas, deverá ser informado dois números. Esses números serão utilizados para realizar a operação matemática selecionada. 
Se o usuário digitar uma opção que não esteja no MENU, o sistema deve mandar uma mensagem de opção inválida.
A formatação da tela de execução é importante;
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float n1, n2, resultado;

    cout << "Escolha uma das opções:" << endl;
    cout << "1 - para SOMAR" << endl;
    cout << "2 - para SUBTRAIR" << endl;
    cout << "3 - para DIVIDIR" << endl;
    cout << "4 - para MULTIPLICAR" << endl;
    cout << "5 - para SAIR" << endl << endl;

    cout << "Informe a opção desejada: ";
    cin >> opcao;

    switch (opcao) {

        case 5:
        exit(EXIT_SUCCESS);
    }

    cout << endl << endl << "Digite o primeiro número: ";
    cin >> n1;

    cout << endl << endl << "Digite o segundo número: ";
    cin >> n2;



    switch (opcao) {
        case 1:

            resultado = n1 + n2;
            cout << endl << endl << "A soma é: " << resultado << endl << endl;
            break;

        case 2:

            resultado = n1 - n2;
            cout << endl << endl << "A subtração é: " << resultado << endl << endl;
            break;

        case 3:

            resultado = n1 / n2;
            cout << endl << endl << "A divisão é: " << setprecision(2) << resultado << endl << endl;
            break;

        case 4:

            resultado = n1 * n2;
            cout << endl << endl << "A multiplicação é: " << resultado << endl << endl;
            break;

        default:

            cout << "opção inválida" << endl << endl;

    }




}

