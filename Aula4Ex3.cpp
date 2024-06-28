#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>




using namespace std;

// Faça um programa que use a biblioteca iomanip e a função setprecision().

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    unsigned int idade = 19;
    long long int cpf = 99988877766;
    float salario = 1248.50;
    double pi = 3.141524999998091;
    char sexo = 'F';
    char nome[50] = "Linguagem C++";
    
    cout << "--- TESTE COM OS TIPOS DE VARIÁVEIS ---" << endl << endl;
    
    
    cout << "Idade: " << idade << " anos" << endl;
    cout << "CPF: " << cpf << endl;
    cout << fixed << setprecision(2);
    cout << "Salário: " << salario << endl;
    cout << "Pi: " << pi << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Nome: " << nome << endl;
    
    
    
}



