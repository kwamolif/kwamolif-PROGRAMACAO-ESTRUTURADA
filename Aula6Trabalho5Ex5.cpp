#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/* 
Faça um programa que receba uma senha formada de quatro números inteiros, verifique se a senha está correta e, caso não esteja, solicite novamente a senha (a senha pode ser solicitada apenas 3 vezes). 
Se a senha entrada for a correta, deverá ser apresentada a mensagem “Senha Correta”, caso contrário, “Senha Incorreta”. 
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int senha, i = 1;

    while (i <= 3) {

        cout << "Digite sua senha: ";
        cin >> senha;
        i++;

        if (senha == 1234) {

            cout << "Senha Correta.";
            i = 4;
        } 
        else {

            cout << "Senha Incorreta." << endl; 
        }
    }
}

