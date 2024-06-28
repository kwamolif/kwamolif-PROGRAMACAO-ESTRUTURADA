#include <cstdlib>
#include <iostream>

using namespace std;

//Esse programa faz um contador, utilizando while


int main(int argc, char** argv) {

    int i = 1;
    
    while (i <= 10){
        
        cout << "número = " << i << endl;
        i = i + 1;
        
    }
    cout <<  endl <<  "ACABOU!!!" ;  
}