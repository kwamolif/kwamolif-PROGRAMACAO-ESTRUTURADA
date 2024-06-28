#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;


// Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média. Após o cálculo, imprima uma mensagem da forma: “Aluno Fulano possui média 7.0”.



int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    char nome[50];
    float km, vmedia, minutos;
    
    cout << "Qual o seu nome?" << endl;
    cin >> nome;
    cout << "Quantos quilômetros percorreu de bicicleta?" << endl;
    cin >> km;
    cout << "Em quantos minutos percorreu essa distância?" << endl;
    cin >> minutos;
    
    vmedia = km/(minutos/60);
    cout << "Olá, " << nome << "! Você percorreu " << km << " km em " << minutos << " minutos, sua velocidade média foi: " << setprecision(3) << vmedia << " km/h";
    
}


