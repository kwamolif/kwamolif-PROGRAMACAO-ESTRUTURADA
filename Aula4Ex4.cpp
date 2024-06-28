#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <cctype>




using namespace std;

// Faça um programa que use a biblioteca cctype e a função toupper().

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    char digito;
    
    cout << "Digite uma letra: ";
    cin >> digito;
    
    digito = toupper(digito);
    
    cout << "A letra digitada foi: " << digito << endl;
    
}



