#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

/*
Escreva um programa em C++ para ler o raio de um círculo, calcular e escrever a sua área e perímetro. 
Fórmulas:  perímetro =  2.pi.r, onde r é o raio e pi vale 3.14, ou pode ser obtido através da biblioteca (cmath), utilizando a constante M_PI.
 */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
    
    const float pi = 3.14;
    float raio, perimetro, area;

    cout << "--- CALCULADORA DE ÁREA E PERÍMETRO DE UM CÍRCULO ---" << endl << endl;
    
    cout << "Qual o raio do círculo? " << endl << endl;
    cin >> raio;
    
    perimetro = 2 * pi * raio;
    
    area = pi * (raio * raio);
    
    cout << "O perímetro desse círculo é: " << perimetro << endl;
    cout << "A área desse círculo é: " << area;
     
}

