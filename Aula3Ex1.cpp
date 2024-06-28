#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

//Esse programa pede a idade do usuário e verifica se ele é maior ou menor de idade


int main(int argc, char** argv) {    
    
    setlocale(LC_ALL, "Portuguese");
   
    int idade;
    
    cout << "Qual a sua idade?" << endl;
    cin >> idade;
    
    if (idade >= 18){
        
    cout << "Você é maior de idade!";
    
    }
    else {
        
    cout << "Você é menor de idade!";
        
    }  
}

