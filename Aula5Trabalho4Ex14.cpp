#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

using namespace std;

/*
A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
média do salário da população; 
média do número de filhos; 
maior salário;
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    unsigned int i = 1;
    float salario, maiorsalario = 0, somasalario, mediasalario, qtdfilho, mediafilho, somafilho;


    cout << "                --- PESQUISA ENTRE 15 HABITANTES ---                  " << endl << endl;


    while (i <= 15) {

        cout << "Habitante " << i << ", informe seu sálario: ";
        cin >> salario;

        cout << "Habitante " << i << ", informe quantos filhos têm: ";
        cin >> qtdfilho;
        
        cout << endl;

        somasalario += salario;

        somafilho += qtdfilho;

        if (salario > maiorsalario ) {

            maiorsalario = salario;

        }

        i++;

    }

    cout << fixed << setprecision(2);

    mediasalario = (somasalario / 15);

    mediafilho = (somafilho / 15);
    

    cout << endl << "A média de salário da população é R$" << mediasalario << " reais." << endl;
    
    cout << endl << "A média do número de filhos da população é " << mediafilho << endl;
    
    cout << endl << "O maior salário entre os entrevistados foi R$" << maiorsalario << " reais." << endl;

}