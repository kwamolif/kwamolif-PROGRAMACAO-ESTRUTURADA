#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

// Faça um programa para imprimir os múltiplos de 3 entre 3 até 100.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i;
    float teste;
    
    cout << "--- TODOS OS NÚMEROS ABAIXO SÃO MÚLTIPLOS DE 3 ---" << endl << endl;
    
    for( i= 1; i <= 100; i++){
        
    teste = i%3;
        
    if(teste == 0){
        
        cout << setw(25) << i << endl;

    }       
    }
}



