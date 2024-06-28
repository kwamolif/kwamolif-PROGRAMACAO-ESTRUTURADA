#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;


// Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na tela o correspondente em Celsius usando a seguinte fórmula: 
// Celsius = (fahrenheit – 32) * (5.0/9.0). 
// OBS: Usar uma variável double ou float para ler o valor em Fahrenheit.



int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    float fahrenheit, celsius;
    
    cout << "Qual a temperatura em Fahrenheit (°F)?" << endl;
    cin >> fahrenheit;
    
    celsius = (fahrenheit-32.0)*(5.0/9.0);  
    cout << endl << fahrenheit << "°F são " << setprecision(3) << celsius << "°C" << endl;

}


