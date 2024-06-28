#include <cstdlib>
#include <iostream>

using namespace std;

//Faça um algoritmo que mostre todos os números de 50 até 1 em ordem decrescente.
//Utilize a estrutura while.


int main(int argc, char** argv) {

    int i = 50;
    
    while (i > 0){
        
        cout << "número = " << i << endl;
        i = i - 1;
        
    }
    cout <<  endl <<  "ACABOU!!!" ;  
}
