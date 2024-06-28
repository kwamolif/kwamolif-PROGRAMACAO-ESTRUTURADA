#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

//Escreva um programa que recebe dois números e retorna o maior deles.


int main(int argc, char** argv) {    
    
    setlocale(LC_ALL, "Portuguese");
   
    int n1, n2;
    
    cout << "Esse programa recebe dois números e retorna o maior deles." << endl << endl;
    
    cout << endl << "Digite o primeiro número: " ;
    cin >> n1;
    
    cout <<  endl << "Digite o segundo número: " ;
    cin >> n2;
    
    if (n1 > n2){
        
    cout << endl << n1 << " é o maior número.";
    
    }
    else {
        
    cout << endl << n2 << " é o maior número.";
        
    }  
}
