#include <cstdlib>
#include <iostream>

using namespace std;

//Esse programa faz um contador, utilizando while


int main(int argc, char** argv) {

    int contador = 0;
    
    while (contador < 5){
        
        cout << "contador = " << contador << endl;
        contador = contador + 1;
        
    }
    cout <<  endl <<  "ACABOU!!!" ;  
}

