#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;

//Esse programa informa se o aluno está aprovado ou reprovado com base em sua média, utilizando if aninhado.


int main(int argc, char** argv) {    
    
    setlocale(LC_ALL, "Portuguese");
   
    float media;
    
    cout << "Digite a média do aluno: ";
    cin >> media;
    
    if (media >=0 && media <= 10){
        
    cout << endl << "A média é valida!!!";
    
    if (media >= 6){
        
    cout << endl << "O aluno foi aprovado com média " << media;
        
    }
    else{
        
    cout << endl << "O aluno foi reprovado com média " << media;    
        
    }
    }
    else{
        
    cout << endl << "A média é invalida!!!";      
    
    }  
}

