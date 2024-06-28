#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

//Escreva um programa para exibir os números contidos no intervalo de n a m. Inclusive n e m devem ser valores informados pelo usuário (os números devem ser exibidos em ordem crescente).

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int n, m, i = 0;

    cout << "--- DIGITE DOIS NÚMEROS E MOSTRAREI OS NÚMEROS, EM ORDEM CRESCENTE, DO INTERVALO ENTRE ELES ---" << endl << endl;

    cout << "Digite o primeiro número: ";
    cin >> n;

    cout << "Digite o segundo número: ";
    cin >> m;
    
    

    if (n < m) {

        while (n <= m) {

            cout << setw(15) << n << endl;
            n++;

        }
    } else {

        while (m <= n) {

            cout << setw(15) << m << endl;
            m++;

        }
    }
}





