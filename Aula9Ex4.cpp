#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>

/*
 * Faça um programa que converta um grau em fahreinheit para celsius, usando protótipo e função.
 */

using namespace std;

float conversor(float);

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");

    float fahrenheit;

    cout << "Qual a temperatura em Fahrenheit (°F)?";
    cin >> fahrenheit;

    cout << endl << fahrenheit << "°F são " << setprecision(3) << conversor(fahrenheit) << "°C" << endl;

}

float conversor(float fahrenheit) {

    float celsius;

    celsius = (fahrenheit - 32.0)*(5.0 / 9.0);

    return celsius;
}

