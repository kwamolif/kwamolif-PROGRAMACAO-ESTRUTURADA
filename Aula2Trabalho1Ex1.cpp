#include <cstdlib>
#include <iostream>
#include <cstring>
#include <locale>
#include <iomanip>


using namespace std;


// Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de quilômetros que ela andou de bicicleta e o tempo gasto em minutos para percorrer essa distância.
//Mostre na tela uma mensagem como: “Olá Mário, você percorreu 30 km em 65 minutos, sua velocidade média foi: 27.7.


int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
   
    char nome[50];
    float nota1, nota2, nota3, media;
    
    cout << "Qual o nome do(a) Aluno(a)?" << endl;
    cin >> nome;
    cout << "Digite as 3 notas dele(a)?" << endl;
    cin >> nota1 >> nota2 >> nota3;

    media = (nota1+nota2+nota3)/3;
    cout << "O(A) aluno(a) " << nome << " possui média: " << setprecision(3) << media;
}


