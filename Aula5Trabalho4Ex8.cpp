#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <cctype>

using namespace std;

/*
Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para feminino), construa um programa que calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas: 
- para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
- para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
Exiba as informações incluindo o peso ideal.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    char sexo;
    float altura, pesoideal;

    cout << "                --- CALCULADORA DE PESO IDEAL ---                  " << endl << endl;


    cout << " Digite F para o sexo feminino ou M para o sexo masculino: ";
    cin >> sexo;

    sexo = toupper(sexo);

    cout << endl << " Digite sua altura em metros: ";
    cin >> altura;



    if (sexo == 'F') {

        pesoideal = (72.7 * altura) - 58;

    }

    if (sexo == 'M') {

        pesoideal = (62.1 * altura) - 44.7;

    }

    cout << endl << " Seu sexo é: " << sexo << endl;
    cout << " Sua altura é: " << altura << " m" << endl;
    cout << " Seu peso ideal é: " << pesoideal << " kg" << endl;
}

