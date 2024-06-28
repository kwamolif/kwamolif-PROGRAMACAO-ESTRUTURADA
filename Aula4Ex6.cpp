#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

// Faça um programa que mostre a tabuada do 6 de forma crescente.

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int i;
    
    for( i= 1; i <= 10; i++){
        
    cout << setw(5) << i << setw(5) << " x 6 = " << setw(15) << i*6 << endl;  
        
    }
}



