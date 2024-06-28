#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;


/*
Faça um programa em C++ para calcular o valor que uma pessoa deve pagar de imposto de renda. O programa deve pedir o nome e o salário dessa pessoa.
Se o salário for menor que R$ 2000,00, deve aparecer a mensagem:  (“Fulano”, você tem isenção de pagamento do IRPF);
Se o salário for maior ou igual a R$ 2000,00, o imposto a ser pago será de 15% do salário.  (IRPF = salário * 0,15). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF);  
Se o salário for maior ou igual a R$ 3000,00, o imposto a ser pago será de 20% do salário.  (IRPF = salário * 0,20). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF);  
Se o salário for maior ou igual a R$ 5000,00, o imposto a ser pago será de 23% do salário.  (IRPF = salário * 0,23). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF);  
Se o salário for maior ou igual a R$ 10000,00, o imposto a ser pago será de 27% do salário.  (IRPF = salário * 0,27). O programa deverá mostrar a mensagem: (“Fulano”, você deverá pagar “$$$” de IRPF).
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    float salario, irpf;

    cout << "--- IRPF 2024 ---" << endl << endl;

    cout  << "Qual o seu nome? " << endl;
    cin >> nome;

    cout << "Qual o seu salário? " << endl;
    cin >> salario;
    
   
    if (salario < 2000) {

        cout << endl << nome << ", você têm isenção de IRPF.";

    }

    if (salario >= 2000 && salario < 3000) {

        irpf = salario*0.15;
        cout << endl << nome << ", você deverá pagar R$" << irpf << " reais de IRPF.";

    }

    if (salario >= 3000 && salario < 5000 ) {

        irpf = salario*0.20;
        cout << endl << nome << ", você deverá pagar R$" << irpf << " reais de IRPF.";

    }
    
    if (salario >= 5000 && salario < 10000 ) {

        irpf = salario*0.23;
        cout << endl << nome << ", você deverá pagar R$" << irpf << " reais de IRPF.";

    }
    
    if (salario >= 10000) {

        irpf = salario*0.27;
        cout << endl << nome << ", você deverá pagar R$" << irpf << " reais de IRPF.";

    }
}