#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
 Esse programa calcula o sálário final de um funcionário
 */

int main(int argc, char** argv) {
    
    setlocale (LC_ALL, "Portuguese");
    int salario = 1000;
    float comissao = 0.05;
    int valorvendas, salariofinal;
   
    cout << "Digite o valor total de vendas de vendas no mês:";
    cin >> valorvendas;
    salariofinal = salario + (comissao * valorvendas);
    cout << "O salário final é: R$" << salariofinal << "reais \n";
}
