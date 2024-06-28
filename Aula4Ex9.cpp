#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

// Faça um programa para mostrar a média de 10 notas.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i;
    float soma = 0.0;
    const int max = 10;
    
    cout << setprecision(2);
    
    for( i= 0; i < max; i++){
        
        cout << "Nota " << (i + 1) << " = ";
        float nota;
        cin >> nota;
        
        soma += nota;
   
    }
    
    cout << setw(5) << "Média = " << (soma / max) << endl;
    
    }



