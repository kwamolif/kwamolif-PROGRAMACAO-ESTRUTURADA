#include <cstdlib>
#include <iostream>
#include <cstring>
#define DIM 5

using namespace std;

/*
Faça um programa que mostre dados de vetores
 */


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    int vetor[DIM] = {10,15,20,25,30};
    int vetor1[] = {10,20,30,40,50,60,-1};
    int i;

    cout << "Vetor com tamanho pré-definido com define" << endl << endl;
    
    for (i=0;  i < DIM; i++){
        
         cout << "Vetor na posição " << i << " = " << vetor[i] << endl << endl;
    }

    cout << "Vetor terminado por -1" << endl << endl;
    
    for (i=0; vetor1[i] > 0; i++){
        
         cout << "Vetor na posição " << i << " = " << vetor1[i] << endl << endl;
    }
}

